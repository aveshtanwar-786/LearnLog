using BloggingWebApp.Models.ViewModels;
using BloggingWebApp.Repositories;
using Microsoft.AspNetCore.Mvc.Rendering;
using Microsoft.AspNetCore.Mvc;
using BloggingWebApp.Models.Domain;

namespace BloggingWebApp.Controllers
{
    public class AdminBlogPostController : Controller
    {
        private readonly ITagRepository tagRepository;
        private readonly IBlogPostRepository _blogPostRepository;

        public AdminBlogPostController(ITagRepository tagRepository,IBlogPostRepository _blogPostRepository)
        {
            this.tagRepository = tagRepository;
            this._blogPostRepository = _blogPostRepository;
        }

        [HttpGet]
        public async Task<IActionResult> Add()
        {
            var tags = await tagRepository.GetAllAsync();

            var model = new AddBlogPostReq
            {
                 Tags = tags.Select(x => new SelectListItem { Text = x.Name, Value = x.Id.ToString() })
            };

            return View(model);
        }

        [HttpPost]
        public async Task<IActionResult> Add(AddBlogPostReq addBlogPostReq)
        {
            var blogPost = new BlogPost
            {
                Heading = addBlogPostReq.Heading,
                PageTitle = addBlogPostReq.PageTitle,
                Content = addBlogPostReq.Content,
                ShortDesc = addBlogPostReq.ShortDesc,
                FeaturedImageUrl = addBlogPostReq.FeaturedImageUrl,
                UrlHandle = addBlogPostReq.UrlHandle,
                PublishedDate = addBlogPostReq.PublishedDate,
                Author = addBlogPostReq.Author,
                Visible = addBlogPostReq.Visible,
            };

            //Map tags From Selected Tags
            var selectedTags = new List<Tag>();

            foreach (var SelectedTagsId in addBlogPostReq.SelectedTags)
            {
                var selectedTagIdAsGuid = Guid.Parse(SelectedTagsId);
                var existingTag = await tagRepository.GetAsync(selectedTagIdAsGuid);

                if (existingTag != null)
                {
                    selectedTags.Add(existingTag); 
                }
            }
            // Mapping tags back to domain model
            blogPost.Tags = selectedTags;

            await _blogPostRepository.AddAsync(blogPost);

            return RedirectToAction("Add");
        }

        public async Task<IActionResult> List()
        {
            // Call The Repository
            var blogPosts = await _blogPostRepository.GetAllAsync();

            return View(blogPosts);
        }

        [HttpGet]
        public async Task<IActionResult> Edit(Guid id)
        {
            // Retrive the Result from the Repository
            var blogpost = await _blogPostRepository.GetAsync(id);

            

            if (blogpost != null)
            {
                var tagsDomainModel = await tagRepository.GetAllAsync();

                // map the domain model into the view model
                var model = new EditBlogPostReq
                {
                    Id = blogpost.Id,
                    Heading = blogpost.Heading,
                    PageTitle = blogpost.PageTitle,
                    Content = blogpost.Content,
                    Author = blogpost.Author,
                    FeaturedImageUrl = blogpost.FeaturedImageUrl,
                    UrlHandle = blogpost.UrlHandle,
                    ShortDesc = blogpost.ShortDesc,
                    PublishedDate = blogpost.PublishedDate,
                    Visible = blogpost.Visible,
                    Tags = tagsDomainModel.Select(x => new SelectListItem
                    {
                        Text = x.Name,
                        Value = x.Id.ToString()
                    }),
                    SelectedTags = blogpost.Tags.Select(x => x.Id.ToString()).ToArray()
                };
                return View(model);
            }

            // pass data to View
            return View(null);
        }

        [HttpPost]
        public async Task<IActionResult> Edit(EditBlogPostReq editBlogPostReq)
        {
            // map view model back to domain model 
            var blogPostDomainModel = new BlogPost
            {
                Id = editBlogPostReq.Id,
                Heading = editBlogPostReq.Heading,
                PageTitle = editBlogPostReq.PageTitle,
                Content = editBlogPostReq.Content,
                Author = editBlogPostReq.Author,
                FeaturedImageUrl = editBlogPostReq.FeaturedImageUrl,
                UrlHandle = editBlogPostReq.UrlHandle,
                ShortDesc = editBlogPostReq.ShortDesc,
                PublishedDate = editBlogPostReq.PublishedDate,
                Visible = editBlogPostReq.Visible,
            };

            // Map tags into domain model
            var selectedtags = new List<Tag>();
            foreach (var selectedTag in editBlogPostReq.SelectedTags)
            {
                if (Guid.TryParse(selectedTag, out var tag))
                {
                    var foundTag = await tagRepository.GetAsync(tag);

                    if (foundTag != null) 
                    {
                        selectedtags.Add(foundTag);
                    }
                }
            }

            blogPostDomainModel.Tags = selectedtags;

            // submit info to repository to update 

            var updatedBlog = await _blogPostRepository.UpdateAsync(blogPostDomainModel);

            if (updatedBlog != null)
            {
                // show success notification
                return RedirectToAction("Edit");
            }

            // show error notification


            return RedirectToAction("Edit");
        }

        public async Task<IActionResult> Delete(EditBlogPostReq editBlogPostReq)
        {
            // Talk to Repository to delete this blog post and tags 
            var deletedBlogPost = await _blogPostRepository.DeleteAsync(editBlogPostReq.Id);

            if (deletedBlogPost != null)
            {
                // Show Success Notification
                return RedirectToAction("List");
            }
            // Display the Response 

            // Show error Notification
            return RedirectToAction("Edit", new { id = editBlogPostReq.Id });
        }
    }
}

using BloggingWebApp.Data;
using BloggingWebApp.Models.Domain;
using BloggingWebApp.Models.ViewModels;
using BloggingWebApp.Repositories;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace BloggingWebApp.Controllers
{
    public class AdminTagsController : Controller
    {
        private readonly ITagRepository tagRepository;

        public AdminTagsController(ITagRepository tagRepository)
        {
            this.tagRepository = tagRepository;
        }

        [HttpGet]
        public IActionResult Add()
        {
            return View();
        }

        [HttpPost]
        //[ActionName("Add")]
        public async Task<IActionResult> Add(AddTagReq addTagReq)
        {
            //Mapping add tag request to the tag domain model
            var tag = new Tag
            {
                Name = addTagReq.Name,
                DispalyName = addTagReq.DispalyName
            };

            await tagRepository.AddAsync(tag);

            //return View("Add");
            return RedirectToAction("List");
        }


        [HttpGet]
        [ActionName("List")]
        public async Task<IActionResult> List()
        {
            // Use DbContext to read the tags. 

            var Demotags = await tagRepository.GetAllAsync();

            return View(Demotags);
        }

        [HttpGet]
        public async Task<IActionResult> Edit(Guid id)
        {
            var tag = await tagRepository.GetAsync(id);

            if (tag != null)
            {
                var editTagRequest = new EditTagReq
                {
                    Id = tag.Id,
                    Name = tag.Name,
                    DispalyName = tag.DispalyName
                };

                return View(editTagRequest);
            }

            return View(null);
        }

        [HttpPost]
        public async Task<IActionResult> Edit(EditTagReq editTagReq)
        {
            var tag = new Tag
            {
                Id = editTagReq.Id,
                Name = editTagReq.Name,
                DispalyName = editTagReq.DispalyName
            };

            var UpdatedTag = await tagRepository.UpdateAsync(tag);

            if (UpdatedTag != null)
            {
                // Show Success Notification
            }
            else
            {
                // Show error notification
            }

            //Show Error Notification 
            return RedirectToAction("Edit", new { id = editTagReq.Id });
        }

        [HttpPost]
        public async Task<IActionResult> Delete(EditTagReq editTagReq)
        {
            var deletedTag = await tagRepository.DeleteAsync(editTagReq.Id);

            if (deletedTag != null)
            {
                // Show Success Notification
                return RedirectToAction("List");
            }

            //Show Error Notification 
            return RedirectToAction("Edit", new { id = editTagReq.Id });
        }
    }
}

using BloggingWebApp.Data;
using BloggingWebApp.Models.Domain;
using Microsoft.EntityFrameworkCore;

namespace BloggingWebApp.Repositories
{
    public class BlogPostRepository : IBlogPostRepository
    {
        private readonly ConnectingToDataBaseDBContext _context;

        public BlogPostRepository(ConnectingToDataBaseDBContext context)
        {
            _context = context;
        }

        public async Task<BlogPost> AddAsync(BlogPost blogPost)
        {
            await _context.BlogPosts.AddAsync(blogPost);
            await _context.SaveChangesAsync();
            return blogPost;
        }

        public async Task<IEnumerable<BlogPost>> GetAllAsync()
        {
            return await _context.BlogPosts.Include(x => x.Tags).ToListAsync();
        }

        public async Task<BlogPost?> GetAsync(Guid id)
        {
            return await _context.BlogPosts.Include(x => x.Tags ).FirstOrDefaultAsync(x => x.Id == id);
        }   

        public async Task<BlogPost?> UpdateAsync(BlogPost blogPost)
        {
            var existingBlog = await _context.BlogPosts.Include(c => c.Tags)
                .FirstOrDefaultAsync(x => x.Id == blogPost.Id);


            if (existingBlog != null)
            { 
                existingBlog.Id = blogPost.Id;
                existingBlog.Heading = blogPost.Heading;
                existingBlog.PageTitle = blogPost.PageTitle;
                existingBlog.Content = blogPost.Content;
                existingBlog.ShortDesc = blogPost.ShortDesc;
                existingBlog.Author = blogPost.Author;
                existingBlog.FeaturedImageUrl = blogPost.FeaturedImageUrl;
                existingBlog.UrlHandle = blogPost.UrlHandle;
                existingBlog.Visible = blogPost.Visible;
                existingBlog.PublishedDate = blogPost.PublishedDate;
                existingBlog.Tags = blogPost.Tags;

                await _context.SaveChangesAsync();
                return existingBlog;
            }

            return null;
        }

        public async Task<BlogPost?> DeleteAsync(Guid id)
        {
            var existingblogPost = await _context.BlogPosts.FindAsync(id);

            if (existingblogPost != null)
            {
                _context.BlogPosts.Remove(existingblogPost);
                await _context.SaveChangesAsync();
                return existingblogPost;
            }

            return null;
        }

        public async Task<BlogPost?> GetByUrlHandleAsync(string urlHandle)
        {
            return await _context.BlogPosts.Include(x => x.Tags).FirstOrDefaultAsync(x => x.UrlHandle == urlHandle);
        }
    }
}

using BloggingWebApp.Data;
using BloggingWebApp.Models.Domain;
using BloggingWebApp.Models.ViewModels;
using Microsoft.EntityFrameworkCore;

namespace BloggingWebApp.Repositories
{
    public class TagRepository : ITagRepository
    {
        private readonly ConnectingToDataBaseDBContext connectingToDataBaseDBContext;

        public TagRepository(ConnectingToDataBaseDBContext connectingToDataBaseDBContext)
        {
            this.connectingToDataBaseDBContext = connectingToDataBaseDBContext;
        }

        public async Task<Tag> AddAsync(Tag tag)
        {
            await connectingToDataBaseDBContext.Tags.AddAsync(tag);
            await connectingToDataBaseDBContext.SaveChangesAsync();
            return tag;
        }

        public async Task<Tag?> DeleteAsync(Guid id)
        {
            var existingTag = await connectingToDataBaseDBContext.Tags.FindAsync(id);

            if (existingTag != null)
            {
                connectingToDataBaseDBContext.Tags.Remove(existingTag);
                await connectingToDataBaseDBContext.SaveChangesAsync();

                return existingTag;
            }
            return null;    
        }

        public async Task<IEnumerable<Tag>> GetAllAsync()
        {
            return await connectingToDataBaseDBContext.Tags.ToListAsync();
        }

        public Task<Tag?> GetAsync(Guid id)
        {
            return connectingToDataBaseDBContext.Tags.FirstOrDefaultAsync(x => x.Id == id);
        }

        public async Task<Tag?> UpdateAsync(Tag tag)
        {
            var existingTag = await connectingToDataBaseDBContext.Tags.FindAsync(tag.Id);
            if (existingTag != null)
            {
                existingTag.Name = tag.Name;
                existingTag.DispalyName = tag.DispalyName;

                await connectingToDataBaseDBContext.SaveChangesAsync();

                return existingTag;
            }
            return null;
        }
    }
}

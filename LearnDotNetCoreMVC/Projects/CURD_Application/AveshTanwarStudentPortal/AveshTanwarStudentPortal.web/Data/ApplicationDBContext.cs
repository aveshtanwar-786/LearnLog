using AveshTanwarStudentPortal.web.Models.Entities;
using Microsoft.EntityFrameworkCore;

namespace AveshTanwarStudentPortal.web.Data
{
    public class ApplicationDBContext : DbContext
    {
        public ApplicationDBContext(DbContextOptions<ApplicationDBContext> options): base(options)
        {
            
        }

        public DbSet<Students> Students { get; set; }
    }
}

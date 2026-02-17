using Microsoft.EntityFrameworkCore;

namespace CodeFirstAspCore9Proj.Models
{
    public class EmployeeDBContext : DbContext
    {
        public EmployeeDBContext(DbContextOptions options) : base(options)
        {
            
        }

        public DbSet<Employee> Employees { get; set; }
    }
}

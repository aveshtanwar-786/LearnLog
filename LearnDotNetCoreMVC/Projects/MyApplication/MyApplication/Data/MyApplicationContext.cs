

using Microsoft.EntityFrameworkCore;
using MyApplication.Models;

namespace MyApplication.Data
{
    public class MyApplicationContext : DbContext 
    {
        public MyApplicationContext(DbContextOptions<MyApplicationContext> options) : base(options) { }

        public DbSet<Item> Items { get; set; }
    }
}

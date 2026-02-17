using BloggingWebApp.Models;
using BloggingWebApp.Models.Domain;
using Microsoft.EntityFrameworkCore;

namespace BloggingWebApp.Data
{
    public class ConnectingToDataBaseDBContext : DbContext
    {
        public ConnectingToDataBaseDBContext(DbContextOptions options) : base(options)
        {
        }

        public DbSet<BlogPost> BlogPosts { get; set; }

        public DbSet<Tag> Tags { get; set; }

        public DbSet<Country> Countries { get; set; }
        public DbSet<State> States { get; set; }
        public DbSet<City> Cities { get; set; }

        public DbSet<UserLocation> UserLocations { get; set; }
    }
}

using System;
using System.Collections.Generic;
using Microsoft.EntityFrameworkCore;
using WebApplication2.Models.Domain;

namespace WebApplication2.Data;

public partial class ZoneBlueDbContext : DbContext
{
    //public ZoneBlueDbContext()
    //{
    //}

    public ZoneBlueDbContext(DbContextOptions options) : base(options)
    {
    }

    public DbSet<BlogPost> BlogPosts { get; set; }

    public DbSet<Tag> Tags { get; set; }

}

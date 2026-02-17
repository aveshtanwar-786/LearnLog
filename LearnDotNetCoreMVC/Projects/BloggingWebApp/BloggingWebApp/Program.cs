using BloggingWebApp.Data;
using BloggingWebApp.Models;
using BloggingWebApp.Repositories;
using Microsoft.EntityFrameworkCore;

var builder = WebApplication.CreateBuilder(args);

builder.Services.AddControllersWithViews();

builder.Services.AddDbContext<ConnectingToDataBaseDBContext>(options =>
{
    options.UseSqlServer(
        builder.Configuration.GetConnectionString("dbcs")
        ?? throw new InvalidOperationException("Connection string 'dbcs' not found.")
    );
});

builder.Services.AddScoped<IBlogPostRepository, BlogPostRepository>();
builder.Services.AddScoped<ITagRepository, TagRepository>();
builder.Services.AddScoped<ILocationRepository, LocationRepository>();
builder.Services.AddScoped<IImageRepository, CloudinaryImageRepository>();


// TODO: Add Authentication services here

var app = builder.Build();

if (!app.Environment.IsDevelopment())
{
    app.UseExceptionHandler("/Home/Error");
    app.UseHsts();
}

app.UseHttpsRedirection();
app.UseRouting();

 //app.UseAuthentication(); // REQUIRED when auth is added
app.UseAuthorization();

app.MapStaticAssets();

app.MapControllerRoute(
    name: "default",
    pattern: "{controller=Home}/{action=Index}/{id?}")
    .WithStaticAssets();

app.Run();

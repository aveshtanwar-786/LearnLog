var builder = WebApplication.CreateBuilder(args);

builder.Services.AddControllersWithViews();

var app = builder.Build();

app.UseRouting();

app.MapDefaultControllerRoute();

//app.MapControllerRoute(
//    name:"Default",
//    pattern:"{controller=Home}/{action=Index}/{id?}");

//app.MapGet("/", () => "Hello World!");

app.MapControllers();

app.Run();

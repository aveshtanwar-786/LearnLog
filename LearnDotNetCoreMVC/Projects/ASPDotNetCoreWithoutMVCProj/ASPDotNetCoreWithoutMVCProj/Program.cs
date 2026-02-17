var builder = WebApplication.CreateBuilder(args);

builder.Services.AddControllersWithViews();

var app = builder.Build();

//app.MapGet("/", () => "Hello World!");

//app.Use(async (context, next) =>
//{
//    await context.Response.WriteAsync("Happy New Year!\n");
//    await next();
//});

//app.Run(async(context)=>
//{
//    await context.Response.WriteAsync("Jaya-da kush mat ho, wese bhi 2026 me duniya khatam hone walli hai!");
//});

app.UseRouting();

//app.MapDefaultControllerRoute();

//app.MapControllerRoute(
//    name:"Default",
//    pattern:"{controller=Home}/{action=Index}/{id?}");

//app.MapControllers();

app.MapControllers();

app.Run();

var builder = WebApplication.CreateBuilder(args);

var app = builder.Build();

//app.MapGet("/", () => "Hello World!");

app.Use(async (context, next) =>
{
    await context.Response.WriteAsync("Hello World!");
    await next(context);
});

app.Run(async (context) =>
    {
        await context.Response.WriteAsync("\n This is last Middleware. ");
});

app.Run();

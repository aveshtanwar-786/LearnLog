var builder = WebApplication.CreateBuilder(args);
var app = builder.Build();

//app.MapGet("/", () => "Hello World!");

//app.Run(async (context) =>
//{
//    await context.Response.WriteAsync("Dont Panic...Be Patient!!");
//}

//    );

app.Use(async (context, next) =>
{
    await context.Response.WriteAsync("Dont Panic...\n");
    await next(context);
});

app.Use(async (context, next) =>
{
    await context.Response.WriteAsync("Be Patient!!\n");
    await next(context);
});

app.Run(async (context) =>
    {
        await context.Response.WriteAsync("You will become Great, one day");
    });

app.Run();

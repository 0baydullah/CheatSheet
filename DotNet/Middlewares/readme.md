# Middlewares

```cs

    var builder = WebApplication.CreateBuilder(args);
    var app = builder.Build();

    //app.MapGet("/", () => "Hello World!");

    app.Use(async (context , next) =>
    {
        await context.Response.WriteAsync("Hello from FIRST middleware \n");
        await next(context);
    });

    app.Use(async (context, next) =>
    {
        await context.Response.WriteAsync("Hello from SECOND middleware \n");
        await next(context);
    });

    app.Run(async (context) =>
    {
        await context.Response.WriteAsync("Hello from FINAL middleware \n");
    });

    app.Run();



```


### Links
    - [Middleware](https://learn.microsoft.com/en-us/aspnet/core/fundamentals/middleware/?view=aspnetcore-8.0)

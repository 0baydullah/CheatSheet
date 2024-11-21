
### 2. **Database-First Approach (DbFirst)**

#### a) Install Required EF Core Packages
Run the following commands to install the necessary packages:
```cs
dotnet add package Microsoft.EntityFrameworkCore.SqlServer
dotnet add package Microsoft.EntityFrameworkCore.Tools
dotnet add package Microsoft.EntityFrameworkCore.Design
```
#### b) execute command for Scaffold DbContext 
```bash
Scaffold-DbContext "Server=MACHINEX\SQLEXPRESS;Database=MyDb;Integrated Security=True;Encrypt=False;Trust Server Certificate=True" Microsoft.EntityFrameworkCore.SqlServer -OutputDir Models (-force)
```
#### c) move connection string from DbContext class to appsettings.json file
#### d) registering Connection String in Program.cs file
```cs
var provider = builder.Services.BuildServiceProvider(); 
var config = provider.GetRequiredService<IConfiguration>();
builder.Services.AddDbContext<MyDbContext>(item=>item.UseSqlServer(config.GetConnectionString("dbcs")));
```
---
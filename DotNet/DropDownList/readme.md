# DropDown List

- ### With Enum 

	- Make an Enum
    - Make  view
```cs
    public enum Gender
    {
        Male,
        Female
    }

```

```cs
    @* Drop Down List With Enum  *@
    <div>
        <label class="form-label">Select Gender : </label>
        @Html.DropDownList("Gender",
                Html.GetEnumSelectList<Gender>(), "Select Gender",
                new { @class = "form-control" })
    </div>

 ```


 
- ### With Select List Item

	- Make a Select List Item in Action Method
    - Make  view
```cs
    public IActionResult Index()
    {
        List<SelectListItem> Genderr = new()
        {
            new SelectListItem{Value ="male",Text="Male"},
            new SelectListItem{Value = "female",Text="Female"}
        };
        ViewBag.Gender = Genderr;
        return View();
    }

```

```cs
    @* Drop Down List Without Enum *@
    <div>
        <label class="form-label">Select Gender : </label>
        @Html.DropDownList("Gender",
                ViewBag.Gender, "Select Gender",
                new { @class = "form-control" })
    </div>


    @* Drop Down List With TagHelper *@
    <div>
        <label class="form-label">Select Gender : </label>
        <select name="Gender" asp-items="@ViewBag.Gender" class="form-control">
              <option value="">Select Gender</option>
        </select>
    </div>

 ```


    
    
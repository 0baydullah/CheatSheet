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
    @* Drop Down List With Enum Html Helper  *@
    <div>
        <label class="form-label">Select Gender : </label>
        @Html.DropDownList("Gender",
                Html.GetEnumSelectList<Gender>(), "Select Gender",
                new { @class = "form-control" })
    </div>

 ```


```cs
    @* Drop Down List With Enum Tag Helper *@
	<div class="form-group">
		<label asp-for="Major" class="control-label"></label>
		<select asp-for="Major" class="form-control" asp-items="Html.GetEnumSelectList<Major>()">
			<option value="" selected disabled>Select Major</option>Major
		</select>
		<span asp-validation-for="Major" class="text-danger"></span>
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


    
    

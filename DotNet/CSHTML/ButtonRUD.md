#  Bootstap Button (anchor tag) for Edit Delete & Details

```cshtml

  <td>
    <a class="btn btn-light" asp-controller="Banks" asp-action="EditBBCD" asp-route-id="@bank.Id">
        <i class="text-danger fa-solid fa-pen"></i>
    </a>
    <a class="btn btn-light" asp-controller="Banks" asp-action="DeleteBBC" asp-route-id="@bank.Id">
        <i class="text-danger fa-solid fa-trash"></i>
    </a>
    <a class="btn btn-light" asp-controller="Banks" asp-action="DetailsBBC" asp-route-id="@bank.Id">
        <i class="text-danger fa-solid fa-circle-info"></i>
    </a>
  </td>

```

// ViewModels/DropdownViewModel.cs
using Microsoft.AspNetCore.Mvc.Rendering;

namespace New_Trial.ViewModels
{
    public class DropdownViewModel
    {
        public int SelectedCountryId { get; set; }
        public List<SelectListItem> Countries { get; set; } = new();
    }
}


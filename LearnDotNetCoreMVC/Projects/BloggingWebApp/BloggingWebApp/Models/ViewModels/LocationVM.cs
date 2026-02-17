using System.ComponentModel.DataAnnotations;

namespace BloggingWebApp.Models.ViewModels
{
    public class LocationVM
    {
        [Required]
        public int CountryId { get; set; }
        [Required]
        public int StateId { get; set; }
        [Required]
        public int CityId { get; set; }

        public List<Country> Countries { get; set; }
    }

}

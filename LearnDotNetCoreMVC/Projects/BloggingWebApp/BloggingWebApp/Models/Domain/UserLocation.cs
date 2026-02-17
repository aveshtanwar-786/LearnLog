namespace BloggingWebApp.Models.Domain
{
    public class UserLocation
    {
        public int Id { get; set; }
        public int CountryId { get; set; }

        public int StateId { get; set; }
        public int CityId { get; set; }
    }
}

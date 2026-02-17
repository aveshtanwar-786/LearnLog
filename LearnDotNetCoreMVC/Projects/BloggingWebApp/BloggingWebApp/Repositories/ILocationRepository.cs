using BloggingWebApp.Models;
using BloggingWebApp.Models.Domain;

namespace BloggingWebApp.Repositories
{
    public interface ILocationRepository
    {
        Task<List<Country>> GetCountriesAsync();
        Task<List<State>> GetStatesByCountryIdAsync(int countryId);
        Task<List<City>> GetCitiesByStateIdAsync(int stateId);
        // Interface
        //Task<UserLocation> SaveUserLocationAsync(UserLocation location);

        // Interface
        Task SaveUserLocationAsync(UserLocation location);

    }

}

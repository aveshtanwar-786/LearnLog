using BloggingWebApp.Data;
using BloggingWebApp.Models;
using BloggingWebApp.Models.Domain;
using Microsoft.EntityFrameworkCore;

namespace BloggingWebApp.Repositories
{
    public class LocationRepository : ILocationRepository
    {
        private readonly ConnectingToDataBaseDBContext _context;

        public LocationRepository(ConnectingToDataBaseDBContext context)
        {
            _context = context;
        }

        public async Task<List<Country>> GetCountriesAsync()
        {
            return await _context.Countries.ToListAsync();
        }

        public async Task<List<State>> GetStatesByCountryIdAsync(int countryId)
        {
            return await _context.States
                        .Where(s => s.CountryId == countryId)
                        .ToListAsync();
        }

        public async Task<List<City>> GetCitiesByStateIdAsync(int stateId)
        {
            return await _context.Cities
                        .Where(c => c.StateId == stateId)
                        .ToListAsync();
        }



        // Repo
        public async Task SaveUserLocationAsync(UserLocation location)
        {
            _context.UserLocations.Add(location);
            await _context.SaveChangesAsync();
        }



    }

}

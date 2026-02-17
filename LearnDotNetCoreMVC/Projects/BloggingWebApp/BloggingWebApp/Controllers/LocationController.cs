using BloggingWebApp.Models.Domain;
using BloggingWebApp.Models.ViewModels;
using BloggingWebApp.Repositories;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace BloggingWebApp.Controllers
{
    public class LocationController : Controller
    {
        private readonly ILocationRepository _repo;

        public LocationController(ILocationRepository repo)
        {
            _repo = repo;
        }

        public async Task<IActionResult> Index()
        {
            var vm = new LocationVM
            {
                Countries = await _repo.GetCountriesAsync()
            };
            return View(vm);
        }

        [HttpGet]
        public async Task<JsonResult> GetStates(int countryId)
        {
            var states = await _repo.GetStatesByCountryIdAsync(countryId);
            return Json(states);
        }

        [HttpGet]
        public async Task<JsonResult> GetCities(int stateId)
        {
            var cities = await _repo.GetCitiesByStateIdAsync(stateId);
            return Json(cities);
        }

        [HttpPost]
        public async Task<IActionResult> Index(LocationVM model)
        {

            if (ModelState.IsValid)
            {
                model.Countries = await _repo.GetCountriesAsync();
                return View(model);
            }


            var entity = new UserLocation
            {
                CountryId = model.CountryId,
                StateId = model.StateId,
                CityId = model.CityId
            };

            await _repo.SaveUserLocationAsync(entity);

            return RedirectToAction("Index");
        }
    }

}

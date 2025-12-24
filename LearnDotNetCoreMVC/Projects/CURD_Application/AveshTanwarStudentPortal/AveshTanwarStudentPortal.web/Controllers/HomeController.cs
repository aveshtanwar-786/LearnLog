//the Controller's main job is to process user input, coordinate between the data and the display, and deliver the correct response back to the user.

using System.Diagnostics;
using AveshTanwarStudentPortal.web.Models;
using Microsoft.AspNetCore.Mvc;

namespace AveshTanwarStudentPortal.web.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;

        public HomeController(ILogger<HomeController> logger)
        {
            _logger = logger;
        }

        public IActionResult Index()
        {
            return View();
        }

        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}

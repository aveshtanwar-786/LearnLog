using Microsoft.AspNetCore.Mvc;
using ModelsInAspDotNetCoreMVC.Models;
using System.Diagnostics;

namespace ModelsInAspDotNetCoreMVC.Controllers
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
            var students = new List<StudentModel>
            { 
                new StudentModel { rollNo = 1, Name = "Muhammad Avesh Tanwar", Gender = "Male", Standard = 14},
                new StudentModel { rollNo = 2, Name = "Memuna Tanwar", Gender = "Female", Standard = 15},
                new StudentModel { rollNo = 3, Name = "Sadiya Tanwar", Gender = "Female", Standard = 16},
            };

            ViewBag.Students = students;
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

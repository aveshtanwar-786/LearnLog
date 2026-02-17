using InstallingBootstrapClasses.Models;
using Microsoft.AspNetCore.Mvc;

namespace InstallingBootstrapClasses.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
            var Students = new List<Student>
            {
                new Student { Id = 1, Name = "Ravi", Gender = "Male"},
                new Student { Id = 2, Name = "Prem", Gender = "Male"},
                new Student { Id = 3, Name = "Avesh", Gender = "Male"},
            };
            return View(Students);
        }

        public IActionResult About()
        {
            var Students = new List<Student>
            {
                new Student { Id = 1, Name = "Ravi", Gender = "Male"},
                new Student { Id = 2, Name = "Prem", Gender = "Male"},
                new Student { Id = 3, Name = "Avesh", Gender = "Male"},
            };
            return View(Students);
        }

        public IActionResult Details()
        {
            var Students = new List<Student>
            {
                new Student { Id = 1, Name = "Ravi", Gender = "Male"},
                new Student { Id = 2, Name = "Prem", Gender = "Male"},
                new Student { Id = 3, Name = "Avesh", Gender = "Male"},
            };
            return View(Students);
        }
    }
}

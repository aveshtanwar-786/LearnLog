using Microsoft.AspNetCore.Mvc;

namespace ViewsProj.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
            ViewData["data1"] = "Muhammad Avesh Tanwar";
            ViewData["data2"] = 221;
            ViewData["data3"] = DateTime.Now.ToLongDateString();
            return View();
        }

        public IActionResult About()
        {
            return View();
        }

        public IActionResult Contact()
        {
            return View();
        }
    }
}

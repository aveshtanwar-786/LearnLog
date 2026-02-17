using Microsoft.AspNetCore.Mvc;

namespace DataFromControllersToViewProj.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }
    }
}

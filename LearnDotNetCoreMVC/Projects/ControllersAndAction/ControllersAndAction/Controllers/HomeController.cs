using Microsoft.AspNetCore.Mvc;

namespace ControllersAndAction.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
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

        //public String Display() 
        //{
        //    return "Hi I wants to Be lagend...";
        //}

        //public int DisplayId(int id)
        //{
        //    return id;
        //}

    }
}

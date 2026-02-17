using Microsoft.AspNetCore.Mvc;

namespace ActionsAndControllerProj.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
            TempData["Demo1"] = "Temp Data";
            TempData.Keep("Demo1");
            ViewData["data1"] = "Muhammad Avesh Tanwar!";
            ViewData["data3"] = 19;
            ViewData["data2"] = DateTime.Now.ToLongDateString();
            String[] arr = { "Sadiya", "Alina", "Maira" };
            ViewData["data4"] = arr;

            ViewData["data5"] = new List<string>()
            {
                "Coding","Football","Chess"
            };
            return View();
            return RedirectToAction("mTempData");
        }

        public IActionResult About()
        {
            //ViewBag.Data2 = "Muhammad Avesh Tanwar.";
            //ViewBag.Data1 = DateTime.Now.ToShortTimeString();

            ViewBag.Data1 = "Muhammad Avesh Tanwar!";
            ViewBag.Data2 = 19;
            ViewBag.Data3 = DateTime.Now.ToShortDateString();
            String[] arr  = { "Sadiya", "Alina", "Maira" };
            ViewBag.Data4 = arr;

            ViewBag.Data5 = new List<string>()
            {
                "Coding","Football","Chess"
            };
            return View();
        }

        [Route("~/")]
        public IActionResult mTempData()
        {
            
            TempData.Keep("Demo1");
            return View();
        }
    }
}

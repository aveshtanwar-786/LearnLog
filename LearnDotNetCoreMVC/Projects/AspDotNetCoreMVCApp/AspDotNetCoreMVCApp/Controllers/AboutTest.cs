using Microsoft.AspNetCore.Mvc;

namespace AspDotNetCoreMVCApp.Controllers
{
    public class AboutTest : Controller
    {
        public IActionResult AboutShow1()
        {
            return View();
        }
    }
}

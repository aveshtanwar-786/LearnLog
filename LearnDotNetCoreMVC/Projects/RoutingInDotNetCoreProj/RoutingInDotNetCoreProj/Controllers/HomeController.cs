using Microsoft.AspNetCore.Mvc;

namespace RoutingInDotNetCoreProj.Controllers
{
    [Route("[Controller]/[Action]")]
    public class HomeController : Controller
    {
        [Route("~/")]
        public IActionResult Index()
        {
            return View();
        }
    }
}

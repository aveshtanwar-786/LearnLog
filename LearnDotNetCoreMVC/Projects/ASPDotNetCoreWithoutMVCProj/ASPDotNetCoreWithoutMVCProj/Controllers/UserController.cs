using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Razor.Compilation;

namespace ASPDotNetCoreWithoutMVCProj.Controllers
{
    [Route("[controller]/[action]")]
    public class UserController : Controller
    {
        [Route("~/")]
        [Route("~/User/[action]")]
        public IActionResult Index()
        {
            return View();
        }
        //[Route("About")]
        public IActionResult About()
        {
            return View();
        }
        [Route("{id?}")]
        public int Details(int? id)
        {
            return id ?? 4;
        }
    }
}

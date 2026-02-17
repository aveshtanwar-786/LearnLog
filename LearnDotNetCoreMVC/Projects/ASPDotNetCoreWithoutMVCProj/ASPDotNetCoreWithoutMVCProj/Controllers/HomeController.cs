/*using Microsoft.AspNetCore.Mvc;

namespace ASPDotNetCoreWithoutMVCProj.Controllers
{
    //[Route("Home")]
    [Route("[controller]/[action]")]
    public class HomeController : Controller
    {
        //[Route("")]
        //[Route("About")]
        //[Route("Home/Index")]
        //public IActionResult error()
        //{
        //    return View("~/Views/Home/Index.cshtml");
        //}


        //[Route("Index")]
        //[Route("[action]")]
        [Route("~/Home")]
        [Route("~/")]
        public IActionResult Index()
        {
            return View();
        }


        //[Route("[action]/{id?}")]
        [Route("{id?}")]
        public int About(int? id)
        {
            return id ?? 2;
        }
    }
}
*/
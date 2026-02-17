using Microsoft.AspNetCore.Mvc;

namespace New_Trial.Controllers
{
    public class CustomerController : Controller
    {
        public IActionResult Index()
        {
            return View("CustomerView");
        }

        public IActionResult New()
        {
            return View("CustomerForm");
        }
    }
}

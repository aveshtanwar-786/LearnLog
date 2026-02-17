using Microsoft.AspNetCore.Mvc;

namespace New_Trial.Controllers
{
    public class SupplierController : Controller
    {
        public IActionResult Index()
        {
            return View("SupplierView");
        }
        public IActionResult New()
        {
            return View("SupplierForm");
        }
    }
}

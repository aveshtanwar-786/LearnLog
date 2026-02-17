using Microsoft.AspNetCore.Mvc;

namespace New_Trial.Controllers
{
    public class OrderController : Controller
    {
        public IActionResult Index()
        {
            return View("OrderView");
        }

        public IActionResult New()
        {
            return View("OrderForm");
        }
    }
}

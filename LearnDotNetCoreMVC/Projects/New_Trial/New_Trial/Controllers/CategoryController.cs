using Microsoft.AspNetCore.Mvc;

namespace New_Trial.Controllers
{
    public class CategoryController : Controller
    {
        public IActionResult Index()
        {
            return View("CategoryView");
        }

        public IActionResult New()
        {
            return View("CategoryForm");
        }
    }
}

using Microsoft.AspNetCore.Mvc;
using MyApplication.Models; //This line is coumpulsary to include a model to the controller.

namespace MyApplication.Controllers
{
    public class ItemsController : Controller
    {
        public IActionResult Overview() //IActionResult allows method to return different types of things in this case we have return view. IActionResult is a flexible return type for controller actions.

        {
            var i = new Item()
            {
                Name = "Avesh",
                Price = 999.99m,
                Category = "Electronics"
            };   //Not necessary to give it a id because program will give it by inself. It will create  the item and then return it to the view.
            return View(i);
        }

        public IActionResult Edit(int Id)
        {
            return Content("Avesh Tanwar :  "+ Id);
        }
    }
}

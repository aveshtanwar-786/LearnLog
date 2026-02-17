using Microsoft.AspNetCore.Mvc;
using New_Trial.Models;

namespace New_Trial.Controllers
{
    public class ProductController : Controller
    {
        public IActionResult Index()
        {
            var Products = new List<ProductModel>
            { 
                new ProductModel {SrNo = 1, ProdCode = "TSht", ProdName = "T-Shirt", ProdPrice =  499, ProdtDescription = "Men's Cotton T-Shirt"},
                new ProductModel {SrNo = 2, ProdCode = "NMg", ProdName = "Maggi", ProdPrice =  20, ProdtDescription = "Nestle Maggi(Pack of 1) 45gm"},
                new ProductModel {SrNo = 3, ProdCode = "KCB", ProdName = "Cricket Bat", ProdPrice =  1499, ProdtDescription = "Kookabura Cricket Bat English Willow"},
            };

            ViewBag.Product1 = Products;  
            return View("ProductView");
        }
        public IActionResult New()
        {
            return View("ProductForm");
        }
    }
}

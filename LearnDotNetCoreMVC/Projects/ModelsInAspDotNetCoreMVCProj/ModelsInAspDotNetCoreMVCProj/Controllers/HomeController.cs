using Microsoft.AspNetCore.Mvc;
using ModelsInAspDotNetCoreMVCProj.Models;

namespace ModelsInAspDotNetCoreMVCProj.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
            var students = new List<StudentModel>
            { 
                new StudentModel { RollNo = 1, Name = "Sadiya Tanwar", Gender = "Female", Standard = 10},
                new StudentModel { RollNo = 2, Name = "Alina Tanwar", Gender = "Female", Standard = 11},
                new StudentModel { RollNo = 3, Name = "Maira Tanwar", Gender = "Female", Standard = 12},
            };

            var mRelationList = new List<RelationModel>
            { 
                new RelationModel { Id = 1, Name = "Memuna Tanwar", RelationDescription = "Mother", Age = 44},
                new RelationModel { Id = 2, Name = "Sadiya Tanwar", RelationDescription = "Elder Sister", Age = 21},
                new RelationModel { Id = 3, Name = "Alina Tanwar", RelationDescription = "Sister", Age = 14},
                new RelationModel { Id = 4, Name = "Maira Tanwar", RelationDescription = "Little Sisiter", Age = 11},
                new RelationModel { Id = 5, Name = "Rehana Khatri", RelationDescription = "Maternal Grand Mother", Age = 68},
                new RelationModel { Id = 6, Name = "Abdul Rashid Khatri", RelationDescription = "Maternal Grand Father", Age = 71},
                new RelationModel { Id = 7, Name = "Umair Khatri", RelationDescription = "Maternal Uncle", Age = 32},
            };

            ViewBag.RelationData = mRelationList;

            ViewBag.Students = students;

            ViewBag.data1 = "Hello World From Controller !!!";
            return View();
        }
    }
}

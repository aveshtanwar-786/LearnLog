using AveshTanwarStudentPortal.web.Data;
using AveshTanwarStudentPortal.web.Models;
using AveshTanwarStudentPortal.web.Models.Entities;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace AveshTanwarStudentPortal.web.Controllers
{
    public class StudentsController : Controller
    {

        private readonly ApplicationDBContext dBContext;

        public StudentsController(ApplicationDBContext dBContext)
        {
            this.dBContext = dBContext;
        }


        [HttpGet]
        public IActionResult Add()
        {
            return View();
        }
        [HttpPost]
        public async Task<IActionResult> Add(AddStudentViewModel viewModel)
        { 
            //Populating Studemnt Obect from ViewModel returned from screen conrtaining data
            var student = new Students
            {
                Name = viewModel.Name,
                Email = viewModel.Email,
                Phone = viewModel.Phone,
                Subscribed = viewModel.Subscribed
            };

            await dBContext.Students.AddAsync(student);     // It does not freeze your code and run in the background

            await dBContext.SaveChangesAsync();


            return View();
        }


        [HttpGet]
        public async Task<IActionResult> List()
        {
            var Students = await dBContext.Students.ToListAsync();
            return View(Students);
        }




        [HttpGet]
        public async Task<IActionResult> Edit(Guid id)
        {
            var student = await dBContext.Students.FindAsync(id);

            return View(student);
        }

        [HttpPost]
        public async Task<IActionResult> Edit(Students viewModel)
        {
            var student = await dBContext.Students.FindAsync(viewModel.ID);

            if (student is not null)
            {
                student.Name = viewModel.Name;
                student.Email = viewModel.Email;
                student.Phone = viewModel.Phone;
                student.Subscribed = viewModel.Subscribed;

                await dBContext.SaveChangesAsync();
            }

            return RedirectToAction("List", "Students");

        }

        [HttpPost]
        public async Task<IActionResult> Delete(Students viewModel)
        {
            var student = await dBContext.Students
                .AsNoTracking()
                .FirstOrDefaultAsync(x => x.ID == viewModel.ID);

            if (student is not null)
            {
                dBContext.Students.Remove(viewModel);
                await dBContext.SaveChangesAsync();
            }

            return RedirectToAction("List", "Students");
        }
    }
}

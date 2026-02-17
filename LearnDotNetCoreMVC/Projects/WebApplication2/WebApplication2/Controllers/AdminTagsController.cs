
using Microsoft.AspNetCore.Mvc;
using WebApplication2.Data;
using WebApplication2.Models.Domain;
using WebApplication2.Models.ViewModels;




namespace WebApplication2.Controllers
{
    public class AdminTagsController : Controller
    {
        private readonly ZoneBlueDbContext _context;

        public AdminTagsController(ZoneBlueDbContext context)
        {
            this._context = context;
        }

        // GET: AdminTags
        //public async Task<IActionResult> Index()
        //{
        //    return View(await _context.Tags.ToListAsync());
        //}

        // GET: AdminTags/Details/5
        //public async Task<IActionResult> Details(Guid? id)
        //{
        //    if (id == null)
        //    {
        //        return NotFound();
        //    }

        //    var tag = await _context.Tags
        //        .FirstOrDefaultAsync(m => m.Id == id);
        //    if (tag == null)
        //    {
        //        return NotFound();
        //    }

        //    return View(tag);
        //}

        // GET: AdminTags/Create
        [HttpGet]
        public IActionResult Create()
        {
            return View();
        }

        // POST: AdminTags/Create
        // To protect from overposting attacks, enable the specific properties you want to bind to.
        // For more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        //public IActionResult Create(AddTags addTags)
        //{

        //    var tag = new Tag
        //    {
        //        Name = addTags.Name,
        //        DispalyName = addTags.DispalyName
        //    };


        //    ZoneBlueDbContext.Tags.Add(tag);
        //    ZoneBlueDbContext.SaveChanges();

        //    return View("Create");
        //}

        //[ValidateAntiForgeryToken]
        [HttpPost]
        public IActionResult Create(AddTags addTags)
        {
            //if (!ModelState.IsValid)
            //{
            //    return View(addTags);
            //}

            var tag = new Tag
            {
                Name = addTags.Name,
                DispalyName = addTags.DispalyName
            };

            _context.Tags.Add(tag);
            _context.SaveChanges();
            return View("Create");
        }


        // GET: AdminTags/Edit/5
        //public async Task<IActionResult> Edit(Guid? id)
        //{
        //    if (id == null)
        //    {
        //        return NotFound();
        //    }

        //    var tag = await _context.Tags.FindAsync(id);
        //    if (tag == null)
        //    {
        //        return NotFound();
        //    }
        //    return View(tag);
        //}

        // POST: AdminTags/Edit/5
        // To protect from overposting attacks, enable the specific properties you want to bind to.
        // For more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        //[HttpPost]
        //[ValidateAntiForgeryToken]
        //public async Task<IActionResult> Edit(Guid id, [Bind("Id,Name,DispalyName")] Tag tag)
        //{
        //    if (id != tag.Id)
        //    {
        //        return NotFound();
        //    }

        //    if (ModelState.IsValid)
        //    {
        //        try
        //        {
        //            _context.Update(tag);
        //            await _context.SaveChangesAsync();
        //        }
        //        catch (DbUpdateConcurrencyException)
        //        {
        //            if (!TagExists(tag.Id))
        //            {
        //                return NotFound();
        //            }
        //            else
        //            {
        //                throw;
        //            }
        //        }
        //        return RedirectToAction(nameof(Index));
        //    }
        //    return View(tag);
        //}

        // GET: AdminTags/Delete/5
        //public async Task<IActionResult> Delete(Guid? id)
        //{
        //    if (id == null)
        //    {
        //        return NotFound();
        //    }

        //    var tag = await _context.Tags
        //        .FirstOrDefaultAsync(m => m.Id == id);
        //    if (tag == null)
        //    {
        //        return NotFound();
        //    }

        //    return View(tag);
        //}

        // POST: AdminTags/Delete/5
        //[HttpPost, ActionName("Delete")]
        //[ValidateAntiForgeryToken]
        //public async Task<IActionResult> DeleteConfirmed(Guid id)
        //{
        //    var tag = await _context.Tags.FindAsync(id);
        //    if (tag != null)
        //    {
        //        _context.Tags.Remove(tag);
        //    }

        //    await _context.SaveChangesAsync();
        //    return RedirectToAction(nameof(Index));
        //}

        //private bool TagExists(Guid id)
        //{
        //    return _context.Tags.Any(e => e.Id == id);
        //}
    }
}

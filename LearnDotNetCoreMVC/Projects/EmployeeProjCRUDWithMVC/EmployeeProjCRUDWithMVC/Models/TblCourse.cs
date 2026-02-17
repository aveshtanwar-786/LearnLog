using System;
using System.Collections.Generic;

namespace EmployeeProjCRUDWithMVC.Models;

public partial class TblCourse
{
    public int CourseId { get; set; }

    public string? Name { get; set; }

    public string? Title { get; set; }

    public string? Description { get; set; }

    public decimal? Duration { get; set; }

    public string? Thumbnail { get; set; }
}

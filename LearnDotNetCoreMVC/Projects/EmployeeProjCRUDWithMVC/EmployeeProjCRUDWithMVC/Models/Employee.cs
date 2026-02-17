using System;
using System.Collections.Generic;

namespace EmployeeProjCRUDWithMVC.Models;

public partial class Employee
{
    public int EmployeeId { get; set; }

    public string? EmpName { get; set; }

    public int? EmpAge { get; set; }

    public string? EmpDesignation { get; set; }

    public string? EmpDescription { get; set; }

    public DateOnly? JoiningDate { get; set; }
}

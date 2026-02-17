using System;
using System.Collections.Generic;

namespace DependentDropdownWithMVC.Models;

public partial class State
{
    public int StateId { get; set; }

    public string StateCode { get; set; } = null!;

    public string StateName { get; set; } = null!;

    public bool Status { get; set; }

    public DateTime CreatedOn { get; set; }
}

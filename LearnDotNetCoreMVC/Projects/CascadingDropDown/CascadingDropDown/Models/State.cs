using System;
using System.Collections.Generic;

namespace CascadingDropDown.Models;

public partial class State
{
    public int Id { get; set; }

    public string Name { get; set; } = null!;

    public virtual ICollection<City> Cities { get; set; } = new List<City>();
}

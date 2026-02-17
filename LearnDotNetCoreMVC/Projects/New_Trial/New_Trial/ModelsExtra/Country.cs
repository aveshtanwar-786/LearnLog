using System;
using System.Collections.Generic;

namespace New_Trial.Models;

public partial class Country
{
    public int CountryId { get; set; }

    public string CountryName { get; set; } = null!;

    public virtual ICollection<City> Cities { get; set; } = new List<City>();
}

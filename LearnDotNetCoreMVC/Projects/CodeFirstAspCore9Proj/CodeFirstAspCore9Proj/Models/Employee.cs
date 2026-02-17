using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace CodeFirstAspCore9Proj.Models
{
    public class Employee
    {
        [Key]
        public int Id { get; set; }

        [Column("EmployeeName", TypeName = "varchar(100)")]
        public string Name { get; set; }

        [Column("EmployeeGender", TypeName = "varchar(20)")]
        public string Gender { get; set; }
        public int Age { get; set; }
    }
}

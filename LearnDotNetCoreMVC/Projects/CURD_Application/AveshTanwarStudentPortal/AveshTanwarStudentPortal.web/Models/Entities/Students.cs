using System.ComponentModel.DataAnnotations;

namespace AveshTanwarStudentPortal.web.Models.Entities
{
    public class Students
    {
        public Guid ID{ get; set; }

        [Required]
        public string Name{ get; set; }
        public string Email{ get; set; }

        public string Phone{ get; set; }

        public bool Subscribed { get; set; }
    }
}

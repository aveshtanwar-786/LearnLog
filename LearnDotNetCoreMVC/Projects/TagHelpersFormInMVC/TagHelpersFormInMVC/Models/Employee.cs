namespace TagHelpersFormInMVC.Models
{
    public class Employee
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public Genders Gender { get; set; }
        public string Designation { get; set; }
        public int Salary { get; set; }
        public string Married { get; set; }
        public string Description { get; set; }
    }
    public enum Genders
    {
        Male,Female
    }
}

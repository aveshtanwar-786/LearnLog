namespace FormSelfMadeInMVCProj.Models
{
    public class StudentModel
    {
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public string Email { get; set; }
        public string StreetAddress { get; set; }
        public string StreetAddressLine2 { get; set; }
        public string City { get; set; }
        public string State { get; set; }
        public int PinCode { get; set; }
        public int PhoneNumber { get; set; }
        public string Date { get; set; }
        public int RollNo { get; set; }
        public string Subject { get; set; }
        public Course course { get; set; }

    }
    public enum Course
    {
        Science,Commerce,Arts,HomeScience
    }
}

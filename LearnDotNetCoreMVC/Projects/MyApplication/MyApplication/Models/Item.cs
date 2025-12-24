namespace MyApplication.Models
{
    public class Item
    {
        public int Id { get; set; } //{ get; set; } --these were the getter and setter of the application
        public string Name { get; set; }
        public decimal Price { get; set; }
        public string Category { get; set; }
    }
}

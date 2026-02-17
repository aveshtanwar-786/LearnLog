namespace BloggingWebApp.Models.Domain
{
    public class Tag
    {
        public Guid Id { get; set; }
        public String Name { get; set; }
        public string DispalyName { get; set; }

        public ICollection<BlogPost> BlogPosts { get; set; }
    }
}
namespace BloggingWebApp.Models.Domain
{
    public class BlogPost
    {
        public Guid Id { get; set; }
        public String? Heading { get; set; }
        public String PageTitle { get; set; }
        
        public String Content { get; set; }

        public String ShortDesc { get; set; }

        public String FeaturedImageUrl { get; set; }
        public String UrlHandle { get; set; }
        public DateTime PublishedDate { get; set; }
        public String Author { get; set; }
        public String Visible { get; set; }

        // Navigations Property
        public ICollection<Tag> Tags { get; set; }
    }
}

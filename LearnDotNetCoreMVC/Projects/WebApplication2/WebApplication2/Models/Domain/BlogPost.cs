namespace WebApplication2.Models.Domain;

public partial class BlogPost
{
    public Guid Id { get; set; }

    public string? Heading { get; set; }

    public string PageTitle { get; set; } 

    public string Content { get; set; } 

    public string ShortDesc { get; set; }

    public string FeaturedImageUrl { get; set; }

    public string UrlHandle { get; set; } 

    public DateTime PublishedDate { get; set; }

    public string Author { get; set; }

    public string Visible { get; set; }

    public virtual ICollection<Tag> Tags { get; set; } 
}

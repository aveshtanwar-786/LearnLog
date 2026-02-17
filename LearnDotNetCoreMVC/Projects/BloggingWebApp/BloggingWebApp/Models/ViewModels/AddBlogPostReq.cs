using Microsoft.AspNetCore.Mvc.Rendering;

namespace BloggingWebApp.Models.ViewModels
{
    public class AddBlogPostReq
    {
        public String? Heading { get; set; }
        public String PageTitle { get; set; }

        public String Content { get; set; }

        public String ShortDesc { get; set; }

        public String FeaturedImageUrl { get; set; }
        public String UrlHandle { get; set; }
        public DateTime PublishedDate { get; set; }
        public String Author { get; set; }
        public String Visible { get; set; }

        //Display tags
        public IEnumerable<SelectListItem> Tags { get; set; }
        //Collect Tag
        public String[] SelectedTags { get; set; } = Array.Empty<string>();
    }
}

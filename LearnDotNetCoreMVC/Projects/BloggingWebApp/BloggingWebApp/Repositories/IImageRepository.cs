namespace BloggingWebApp.Repositories
{
    public interface IImageRepository
    {
        Task<String> UploadAsync(IFormFile file);
    }
}

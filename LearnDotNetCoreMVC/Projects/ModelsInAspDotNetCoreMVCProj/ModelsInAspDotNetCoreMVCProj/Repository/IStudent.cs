using ModelsInAspDotNetCoreMVCProj.Models;

namespace ModelsInAspDotNetCoreMVCProj.Repository
{
    public interface IStudent
    {
        List<StudentModel> getAllStudents();
        StudentModel getStudentById (int id);
    }
}

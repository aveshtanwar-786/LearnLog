using System;
using System.Collections.Generic;
using Microsoft.EntityFrameworkCore;

namespace EmployeeProjCRUDWithMVC.Models;

public partial class DataBaseFirstDbContext : DbContext
{
    public DataBaseFirstDbContext()
    {
    }

    public DataBaseFirstDbContext(DbContextOptions<DataBaseFirstDbContext> options)
        : base(options)
    {
    }

    public virtual DbSet<Employee> Employees { get; set; }

    public virtual DbSet<TblCourse> TblCourses { get; set; }

    protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
#warning To protect potentially sensitive information in your connection string, you should move it out of source code. You can avoid scaffolding the connection string by using the Name= syntax to read it from configuration - see https://go.microsoft.com/fwlink/?linkid=2131148. For more guidance on storing connection strings, see https://go.microsoft.com/fwlink/?LinkId=723263.
        => optionsBuilder.UseSqlServer("Server=13.71.36.156;Database=DataBaseFirstDB;User Id=BOTSQLAdmin3;Password=B0tSQL@123456; Encrypt=True;TrustServerCertificate=True;");

    protected override void OnModelCreating(ModelBuilder modelBuilder)
    {
        modelBuilder.Entity<Employee>(entity =>
        {
            entity.ToTable("Employee");

            entity.Property(e => e.EmpDescription).IsUnicode(false);
            entity.Property(e => e.EmpDesignation).IsUnicode(false);
            entity.Property(e => e.EmpName).IsUnicode(false);
        });

        modelBuilder.Entity<TblCourse>(entity =>
        {
            entity.HasKey(e => e.CourseId);

            entity.ToTable("tbl_Course");

            entity.Property(e => e.Description).IsUnicode(false);
            entity.Property(e => e.Duration).HasColumnType("numeric(18, 2)");
            entity.Property(e => e.Name).IsUnicode(false);
            entity.Property(e => e.Thumbnail).IsUnicode(false);
            entity.Property(e => e.Title).IsUnicode(false);
        });

        OnModelCreatingPartial(modelBuilder);
    }

    partial void OnModelCreatingPartial(ModelBuilder modelBuilder);
}

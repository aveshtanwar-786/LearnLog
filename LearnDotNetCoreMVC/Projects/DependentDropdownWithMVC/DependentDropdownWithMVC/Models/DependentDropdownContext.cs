using System;
using System.Collections.Generic;
using Microsoft.EntityFrameworkCore;

namespace DependentDropdownWithMVC.Models;

public partial class DependentDropdownContext : DbContext
{
    public DependentDropdownContext()
    {
    }

    public DependentDropdownContext(DbContextOptions<DependentDropdownContext> options)
        : base(options)
    {
    }

    public virtual DbSet<State> States { get; set; }

    protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
#warning To protect potentially sensitive information in your connection string, you should move it out of source code. You can avoid scaffolding the connection string by using the Name= syntax to read it from configuration - see https://go.microsoft.com/fwlink/?linkid=2131148. For more guidance on storing connection strings, see https://go.microsoft.com/fwlink/?LinkId=723263.
        => optionsBuilder.UseSqlServer("Server=13.71.36.156;Database=DependentDropdown;User Id=BOTSQLAdmin3;Password=B0tSQL@123456; Encrypt=True;TrustServerCertificate=True;");

    protected override void OnModelCreating(ModelBuilder modelBuilder)
    {
        modelBuilder.Entity<State>(entity =>
        {
            entity.HasKey(e => e.StateId).HasName("PK__States__C3BA3B3A8B431C81");

            entity.HasIndex(e => e.StateCode, "UQ__States__D515E98AB0962EB6").IsUnique();

            entity.Property(e => e.CreatedOn).HasDefaultValueSql("(getdate())");
            entity.Property(e => e.StateCode)
                .HasMaxLength(5)
                .IsUnicode(false);
            entity.Property(e => e.StateName)
                .HasMaxLength(100)
                .IsUnicode(false);
            entity.Property(e => e.Status).HasDefaultValue(true);
        });

        OnModelCreatingPartial(modelBuilder);
    }

    partial void OnModelCreatingPartial(ModelBuilder modelBuilder);
}

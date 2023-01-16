using System;
namespace Singleton
{
    public class Faculty
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public University University { get; set; }

        public Faculty(int id, string name, University university)
        {
            Id = id;
            Name = name;
            University = university;
        }

        public void printFacultyData()
        {
            Console.WriteLine($"Faculty Id = {Id}\tName = {Name}\tUniversity is {University.getUniversityName()}");
        }
    }
}

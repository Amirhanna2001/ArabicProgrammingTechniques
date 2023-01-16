using System;

namespace Singleton
{
    public class Program
    {
        public static string universityName;

        static void Main(string[] args)
        {
            Console.WriteLine("Singleton Design Pattern\n\n\n");

            University[] universities = new University[10];

            for(int i = 0; i < universities.Length; ++i)
            {
                universityName = "University" + i;
                universities[i] = University.GetUniversity(universityName);
            }

            Faculty[] faculties = new Faculty[5];
            faculties[0] = new Faculty(1, "Computer Science", universities[0]);
            faculties[1] = new Faculty(2, "Law", universities[1]);
            faculties[2] = new Faculty(3, "BIS", universities[3]);
            faculties[3] = new Faculty(4, "XYZ", universities[5]);
            faculties[4] = new Faculty(5, "ABC", universities[6]);


            University.PrintNumbers();

            faculties[3].University.setUniversityName("Helwan");

            for (int i = 0; i < faculties.Length; ++i)
                faculties[i].printFacultyData();
            

            Console.WriteLine();
            Console.WriteLine(universities[5].getUniversityName());

            Console.ReadKey();
        }
    }
}

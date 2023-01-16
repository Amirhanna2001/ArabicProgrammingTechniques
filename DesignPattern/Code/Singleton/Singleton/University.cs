using System;

namespace Singleton
{
    public class University
    {
        private static int NumberOfObjects = 0;
        private static int NumberOfInstance = 0;
        private static University instance;
        private string Name;

        private University(string name)
        {
            ++NumberOfObjects;
            Name = name;
        }
        public string getUniversityName()
        {
            return Name;
        }
        public void setUniversityName(string name)
        {
            Name = name;
        }
        public static University GetUniversity(string name)
        {
             ++NumberOfInstance;

            if(instance == null)
                instance = new University(name);
            
                

            return instance;
        }
        public static void PrintNumbers()
        {
            Console.WriteLine($"Number Of Objects created is {NumberOfObjects}");
            Console.WriteLine($"And Number Of Instances created is {NumberOfInstance}");
        }
    }
}

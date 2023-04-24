using System;

namespace InsertionSort
{
    public class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Insertion Sort");

            int[] nums = { 50, 40, 30, 20, 10 };
            Console.WriteLine("Array Before Sorting");
            for (int j = 0; j < nums.Length; ++j)
                Console.Write(nums[j] + " ");
            Console.WriteLine();

            int[] SortedArray = Sort(nums);

            Console.WriteLine("Array After Sorting");
            for (int j = 0; j < SortedArray.Length; ++j)
                Console.Write(SortedArray[j] + " ");
            Console.WriteLine();

            Console.ReadKey();

        }
        public static int[] Sort(int[] nums)
        {
            for(int i = 1; i < nums.Length; ++i)
            {
                int key = nums[i];
                int j = i - 1;

                while(j >= 0 &&  nums[j]>key)
                {
                    nums[j+1] = nums[j];
                    --j;
                }
                nums[j + 1] = key;
            }

            return nums;
        }
        
    }
}

using System;

namespace BinaryRecursive
{
    public class Program
    {   //1 2 3 4 5 6 7 8 9
        static void Main(string[] args)
        {
            int []arr = new int[] { 10, 20, 30, 40, 50, 60 };
           int res =  BinarySearch(arr,30);
            Console.WriteLine(res);
        }
        public static int  BinarySearchRec(int [] arr,int key,int l,int r)
        {
            if (l > r) return -1;
            int mid = (l+r)/2;//l+(r-l)/2
            if (arr[mid] == key) return mid;

            if (arr[mid] > key) return BinarySearchRec(arr, key, l, mid - 1);

            else return BinarySearchRec(arr, key, mid+1, r);

            
        }
        public static int BinarySearch(int[]arr,int key)
        {
            return BinarySearchRec(arr,key,0,arr.Length);
        }
        
    }
}

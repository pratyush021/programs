using System;
namespace test
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the size of the array:");
            int a = int.Parse(Console.ReadLine());
            if(a > 0) {
            Console.WriteLine("Enter the array elements:");
            int[] arr = new int[a];
            for(int i =0; i< a; i++) {
                arr[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("Enter the position of the array to be replicated:");
            int k = int.Parse(Console.ReadLine());
            if(k > a-1) {
                Console.WriteLine("Position is greater than the size of the array:")
            }
            } else {
                Console.WriteLine("Invalid array size");
            }
        }

    }
}

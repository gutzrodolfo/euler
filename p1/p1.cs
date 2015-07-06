//Problem: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

using System; 

public class p1 {
	
	public static void Main(string[] args)
	{
	
	int sum = 0;
		
		//For loop iterates through 0-1000. 
		for (int i=0; i < 1000; i++)
		{
			//If integer "i" has a 0 modulous for 3 OR 5, store integer in "sum" variable
			//and print the value of "i" at this iteration.
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i; 
				Console.WriteLine(i);
			}
		}
		//print the sum of all integer values with a 0 modulous for 3 OR 5.
		Console.WriteLine("Sum:{0} ", sum);
	}
}
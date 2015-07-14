using System;

public  class LargestPrimeFactor {
	
	public static void Main() {	
		long a=0, // value we want to find prime factor of
		     b=2, // divisor
	     	     c=0; // store value

		string input = Console.ReadLine();
			//grab input for N. convert input to double. 

		if (long.TryParse(input, out a)) {
			Console.WriteLine("Input value: {0}", a);	
		}
		else {
			Console.WriteLine("Error");
		}
			
	//find square of input.
	while (b<=(a))	{
	
		if ( a % b == 0) {
			a=(a/b);
			c=b;
			b=2;

			Console.WriteLine("value of a: {0}", a);
			Console.WriteLine("value of c: {0}", c);
		}
		else { 
			b++; 
			Console.WriteLine("value of b: {0}", b);
		} 
	}

	}

}

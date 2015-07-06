using System; 

public class hello {
	
	public static void Main(string[] args)
	{
	
	int temp = 0;
		
		for (int i=0; i < 1000; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				temp += i; 
				Console.WriteLine(i);
			}
		}
		Console.WriteLine("Sum:{0} ", temp);
	}
}
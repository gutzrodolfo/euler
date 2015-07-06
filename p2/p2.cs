
using System;
using System.Collections.Generic;

public class fibonacci
{
	public static void Main(String[] args)
	{
		List<int> mylist = new List<int>();
		mylist.Add(0);
		mylist.Add(1);

		double temp=0;

		for (int i=2; i < 34; i++)
		{
			mylist.Add(mylist[i-1] + mylist[i-2]);
			Console.WriteLine("fibonacci term: {0}", mylist[i]);
			Console.WriteLine("term number {0}", i);
			
			if (mylist[i] % 2 == 0)
			{
				temp += mylist[i];
				Console.WriteLine("even sum value: {0}", temp);
			}
			
		}
	}
}
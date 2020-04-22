using System;
using System.Collections;
using System.Collections.Generic;

class B{
	public static void Main(){
		int n = int.Parse(Console.ReadLine());
		List<int> t = new List<int>();
		for(int i = 0; i < n ; i++){
			t.Add(int.Parse(Console.ReadLine()));
		}

		t.Sort();

		Console.WriteLine(t[0]);
	}
}
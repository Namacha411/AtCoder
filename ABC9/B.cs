using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using static System.Console;

public class B{
	public static void Main(){
		int n = int.Parse(ReadLine());
		List<int> a = new List<int>();
		for(int i = 0; i < n; i++){
			a.Add(int.Parse(ReadLine()));
		}

		a.Distinct();
		
		foreach(var i in a){
			WriteLine(i);
		}
	}
}
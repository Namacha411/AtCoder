using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class B{
	public static void Main(){
		int[] input = Console.ReadLine().Split(' ').Select(i => int.Parse(i)).ToArray();
		int a = input[0];
		int b = input[1];
		int c = input[2];

		bool plus = false;
		bool minus = false;
		if(a + b == c){
			plus = true;
		}
		if(a - b == c){
			minus = true;
		}

		if(plus && minus){
			Console.WriteLine('?');
		} else if(plus){
			Console.WriteLine('+');
		} else if(minus){
			Console.WriteLine('-');
		} else {
			Console.WriteLine('!');
		}
	}
}
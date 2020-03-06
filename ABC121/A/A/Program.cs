using System;
using static System.Console;

namespace A
{
    class Program
    {
        static void Main(string[] args)
        {
            int H, W, h, w;
            string[] input;
            input = ReadLine().Split(' ');
            H = int.Parse(input[0]);
            W = int.Parse(input[1]);
            input = ReadLine().Split(' ');
            h = int.Parse(input[0]);
            w = int.Parse(input[1]);

            int ans = (H - h) * (W - w);
            WriteLine(ans);
        }
    }
}

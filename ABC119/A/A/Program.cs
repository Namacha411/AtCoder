using System;

namespace A
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            string s = Console.ReadLine();
            string[] date = s.Split('/');
            System.Collections.Generic.List<int> d
                = new System.Collections.Generic.List<int>();
            foreach(var str in date) d.Add(int.Parse(str));

            DateTime dateTime = new DateTime(d[0], d[1], d[2]);
            DateTime TBD = new DateTime(2019, 4, 30);

            if (dateTime <= TBD) Console.WriteLine("Heisei");
            else Console.WriteLine("TBD");
        }
    }
}

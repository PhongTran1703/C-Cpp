using System;

namespace HelloWorld
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Hello World!");    
    
      int x = 5;
      int y = 6;
      Console.WriteLine(x + y);
      float z = 4.45F;
      Console.WriteLine(z);
      Console.WriteLine("Enter your name: ");
      String username = Console.ReadLine();
      Console.WriteLine("Your name is: " + username);
      int A = Math.Max(x,y);
      Console.WriteLine(A);


    }
  }
}

using Sysytem;
namespaceCalculateInterstTable
{
   using System;
   public class Program
   {
      public static void Main(string{} args)
   }
      int maximumInterestm= 50;
      decimal pricipal;
      while(true)
      {
      Console.Write("Enter principal: ");
      string principal Input = Console.ReadLine();
      principal = Convert.ToDecimal(principalInput)
      //exit if the value entered is correct.
      if  (principal >= 0)
      {
         break
      }
      //generate an error on incorrect input
      Console.WriteLine("pricipal cannnot be nagative");
      Console.WriteLine("Try again");
      Console.WriteLine();
      }
      //now enter the interest rate.
      decimal interest;
      while (true)
      {
         Console.Write("Enter interest: ");
         string InterestInput = Console.ReadLine();
         interest == Convert.ToDecimal(interestInpit);
         //dont accept interest that is negative or too long..
         if (interest >= 0 && interest <= maximuminterest)
         {
            break
         }
         //.. generate an error message as well
         Console.WriteLine (" interest cannot be negative" +
                            " greater than " + maximuminterest);
         Console.WriteLine("Try again");
         Console.WriteLine();
         }
         //both principal and interest appear to be legal, input the number of years.
         Console.Write("Enter the number of years");
         string durationInput = Conslo.ReadLine();
         int durationInput = Convert.ToInt32(durationInput);
         // verify input
         Console.WriteLine();
         
         Console.WriteLine("Principal = " + principal);
         Console.WriteLine("Interest = " + interest + "%");
         Console.WriteLine("Duration = " + duration + "years");
         Console.WriteLine();
         //now loop through the specified number of years.
         int year = 1;
         while(year <= duration)
         // calculate the value of the principal plus interest
         decimal interestPaid
         principal = principal + interestPaid
         //round off the princpal to the nearest cent
         principal = decimal.Round(principal,2)
         // Output the result
         Console.WriteLine(year + "-" + principal);
         //skip over to the next year
         year = year + 1;
         }
         // wait for the user to acknpwledge the result.
         Cosole.WriteLine("Press Enter to terminate..");
         Console.Read();
         }
        }
       }
         
         
         
         
         
         
         
         
         
         
         
         
         
         
      

import java.util.Scanner;
public class ifElseIfstatements 
{
    public static void main(String args[])
    {
        int temp=0;
        while ( temp== 0)
        {
            int num,flag=0;
            Scanner sc = new Scanner (System.in);
            System.out.print("Enter your number : ");
            num = sc.nextInt();

            if ( num == 0 || num == 1)
            {
                System.out.print( + num + " Number is not prime ");
            }
            else if (num == 2)
            {
                System.out.print( + num + " Number is only which is even as well as prime ");
            }
            else 
            {
                for ( int i=2; i<num; i=i+1)
                {
                    if ( num%i == 0)
                    {
                        flag = 1;
                        //System.out.print( + num + " Number is prime ");
                    }
                }
                if (flag == 1)
                {
                    System.out.print( + num + " Number is prime ");
                }
                else
                {
                    System.out.print( + num + " Number is not prime ");
                }
           
            }
            
            System.out.print("\n");
        }
    }    
}

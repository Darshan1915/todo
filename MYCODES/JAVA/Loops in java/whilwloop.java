package Loops;

import java.util.Scanner;

public class whilwloop
{
    public static void main(String args[])
    {
        int n,r,sd=0;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a 4 digit number ");
        n=sc.nextInt();

        if(n>0)
        {
            while(n>0)
            {
                r=n%10;     // return the last digit of the number as remainder
                sd=sd+r;
                n=n/10;     // removes the last digit of the number
            }
            System.out.println("Sum of digits = " + sd);
        }
        else
        {
            System.out.println("Not a 4 digit number");
        }
    }
}

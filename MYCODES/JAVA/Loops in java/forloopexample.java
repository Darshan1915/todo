package Loops;

import java.util.Scanner;

public class forloopexample 
{
    public static void main(String args[])
    {
        int num,t,sum=0;
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter day number: ");
        num = sc.nextInt();

        for ( ;num>0 ; )
        {
            t = num%10;
            sum = sum + t;
            num = num/10;
        }
        System.out.print(+sum);
        


    }
    
}

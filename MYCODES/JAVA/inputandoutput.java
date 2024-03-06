
// The Scanner class is used in the Java program to accept input from the standard input device (keyboard) and store them 
// in one or more variables. The Scanner class is available in java.util package.
// To use the Scanner class, we need to create an object of the Scanner class and use the available functions found in 
// the Scanner class to take the different types of input from the user. The available functions in Scanner class are given below.

import java.util.Scanner;

class inputandoutput
{
    public static void main(String args[])
    {
        char a;
        String str;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter any character ");
        a=sc.nextLine().charAt(0);
        System.out.println("Enter any string ");
        str=sc.nextLine();
        System.out.println("You have entered "+a);
        System.out.println("You have entered "+str);
        System.out.print("Enter: ");
        int num  = sc.nextInt();
        System.out.print("Entered is: "+num);
    }
}


// Here you can see that in line number 7 and 8 we have declared 2 variables, a char variable a and a String variable str.
// On line number 9 we have created an object sc of Scanner class. You can use any name instead of sc but remember to follow the
// variable naming rules that we have discussed earlier
// Q11. Write a C program to print the pattern:
// *
// **
// ***
// ****
// *****

package Loops;

import java.util.Scanner;

public class starpattern
{
    public static void main (String args [])
    {
        int i,j;
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=i; j++)
            {
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}

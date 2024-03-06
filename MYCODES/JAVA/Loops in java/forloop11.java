import java.util.Scanner;

public class forloop11 
{
    public static void main(String args[])
    {
        int num1,num2,i;
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter 1st number: ");
        num1 = sc.nextInt();
        System.out.print("Enter 2nd number: ");
        num2 = sc.nextInt();

        for ( i=num1; i<=num2;i++)
        {
            System.out.print(+i+" ");

        }


    }
    
}

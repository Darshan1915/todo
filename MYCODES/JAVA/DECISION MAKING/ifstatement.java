import java.util.Scanner;
public class ifstatement 
{
    public static void main(String args[])
    {
        int num;

        Scanner sc= new Scanner(System.in);
        System.out.print("Enter your number : ");
        num = sc.nextInt();

        if ( num % 2 == 0)
        {
            System.out.print("Number is even");
        }
        else
        {
            System.out.print("Number is odd");
        }
    }
    
}

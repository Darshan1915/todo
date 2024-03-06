import java.util.Scanner;
public class ifelsestatements
{
    public static void main(String args[])
    {
        int a;
        Scanner ab=new Scanner (System.in);
        System.out.print("Enter number: ");
        a=ab.nextInt();
        if(a%2==0)
        {
            if(a>20)
            {
                System.out.print(a + " is an even number and is also greater than 20");
            }
            else
            {
                System.out.print(a + " is an even number but not greater than 20");
            }
        }
        else
        {
            System.out.print(a + " is an odd number");
        }
    }
}

import java.util.Scanner;
public class practic11
{
    public static void main(String args[])
    {
        int a,b;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter your 1st number : ");
        a = sc.nextInt();
        System.out.print("Enter your 2nd number : ");
        b = sc.nextInt();

        int c = a + b;
        System.out.println("Addition of " + a + " and "+ b + " is equal to : " +c );
    }
    
}

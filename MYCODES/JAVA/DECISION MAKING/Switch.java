import java.util.Scanner;

public class Switch
{
    public static void main(String args[])
    {
        int d;
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter day number: ");
        d=sc.nextInt();

        switch(d)
        {
            case 1:
                System.out.print("Sunday");
                break;

            case 2:
                System.out.print("Monday");
                break;

            case 3:
                System.out.print("Tuesday");
                break;

            case 4:
                System.out.print("Wednesday");
                break;

            case 5:
                System.out.print("Thursday");
                break;

            case 6:
                System.out.print("Friday");
                break;

            case 7:
                System.out.print("Saturday");
                break;

            default:
                System.out.print("Invalid Number");
        }
    }
}

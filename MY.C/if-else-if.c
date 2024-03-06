#include <stdio.h>
int main()
{
    //global veriable
    int num1;
    int num2;
    int choice;
    int result= 1;

    printf("Enter your starting number");
    scanf("%d",&num1);

    printf("Enter your last number");
    scanf("%d",&num2);

    printf("Enter your choice\n 1.add\n 2.multiply\n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        result = 0;
    }
    else
    {
        result = 1;
    }
    //local variable
    for( int i=num1; i<=num2; i++)
    {
        if(choice==1)
        {
            result=result+i;
        }
        else if(choice==2)
        {
            result=result*i;
        }
        else
        {
            printf("Enter correct choice");
        }

    }

     printf(" Your expected result is %d ",result);



    return 0;
}

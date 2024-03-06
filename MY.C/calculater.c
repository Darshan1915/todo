#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int ch;

    printf("Enter your 1st number  ",num1);
    scanf("%d",&num1);

    printf("Enter your 2nd number  ",num2);
    scanf("%d",&num2);

    printf("Enter Choice which is given below\n 1. Add \n 2. Sub \n 3. Mul \n 4. Div \n 5.Remainder\n");
    scanf("%d",&ch);

    int result;
    if( ch==1)
    {
        result= num1+num2;
    }
    else if (ch==2)
    {
        result= num1-num2;
    }
    else if (ch==3)
    {
        result= num1*num2;
    }
    else if (ch==4)
    {
        if(num2==0)
        {
            printf("this id invalid number, re-enter the num2");
        }
        else
        {
            result= num1/num2;
        }
    }
    else if (ch==5)
    {
        result=num1%num2;
    }
    else
    {
        printf("Enter correct choice\n");
    }

    printf("Your expected result is: %d", result);

    return 0;
}



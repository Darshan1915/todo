#include <stdio.h>
int main ()
{
    int firstNum;
    int secondNum;
    int thirdNum;
    int result;

    printf("Enter a firstNum \n ");
    scanf("%d", &firstNum);
    printf("enter a secondNum \n");
    scanf( "%d", &secondNum);
    printf("enter a thirdNum\n");
    scanf( "%d",&thirdNum);

    result=firstNum*secondNum*thirdNum;

    printf("your result is %d ", result);

    return 0 ;

    /*
     5/2 = 2; division(Q)
     5%2 = 1; remainder (R)
    */
}

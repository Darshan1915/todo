#include <stdio.h>
int main()
{
    int firstNum;
    int secondNum;


    printf("Enter a firstNum \n ");
    scanf("%d", &firstNum);
    printf("enter a secondNum \n");
    scanf( "%d", &secondNum);

    int result1=firstNum/secondNum;
    int result2=firstNum%secondNum;


    printf("your quotient is %d and your remainder is %d ", result1,result2);

    return 0 ;
}

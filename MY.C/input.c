#include <stdio.h>
int main()
{
    int num1;
    int num2;

    printf("Enter your first number \n");
    scanf("%d", &num1);

    printf("Enter your second number \n");
    scanf("%d", &num2);

    int result;

    result = num1 + num2;

    printf("Your Addition is: %d", result);



   /* int num;
    printf( "Enter a number \n" ) ;
    scanf("%d" , &num  ) ;
    printf("my number is %d",num );*/
    return 0 ;
}

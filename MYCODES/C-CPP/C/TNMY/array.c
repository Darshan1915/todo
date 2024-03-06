#include<stdio.h>

int main()
{
    char arr[5];

    printf("Enter elements: ");
    for ( int i = 0; i<5; i++)
    {
        scanf("%c",&arr[i]);
    }
    printf(" your Entered arrai : ");
    for ( int i = 0; i<5; i++)
    {
        printf("%c ",arr[i]);
    }

    return 0;

}
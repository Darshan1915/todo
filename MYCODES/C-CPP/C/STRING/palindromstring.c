#include <stdio.h>
int main() 
{
    int n;
    printf("Enter your size ");
    scanf("%d",&n);
    int j,i;
    char arr[n];
    printf("Enter array elements : \n  ");
    for ( i=0; i<=n; i++)
    {
        scanf("%c",&arr[i]);
    }
    
    printf("Your entered array elements are : \n ");
    for (  i=0; i<=n; i++)
    {
        printf(" %c ",arr[i]);
    }
    
    printf("\nYour entered array elements are : \n ");
    for (  j=(n); j>=0; j--)
    {
        printf(" %c ",arr[j]);
    }

    if ( arr[i]==arr[j])
    {
        printf("\n your string is pallindrom");
    }
    else
    {
        printf(" your string is not pallindrom");
    }

    
    return 0;
}
#include <stdio.h>
int main ()
{
    int firstnum;
    int lastnum;

    printf("enter your 1st number");
    scanf("%d",&firstnum );

    printf("enter your 2nd number");
    scanf("%d",&lastnum );

    int result;
    result = 0 ;


    for ( int i = firstnum ; i <= lastnum ; i++ )
    {
        result = result + i;
    }

    printf("your result %d ", result );

    return 0 ;
}

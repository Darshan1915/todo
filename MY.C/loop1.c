#include <stdio.h>
int main ()
{
    int lastContingNum;
    int firstNum;

    printf("Enter ur first counting number which u want to add");
    scanf("%d", &firstNum);

    printf("Enter ur last counting number where u want to add");
    scanf("%d", &lastContingNum);

    int add = 0;
    for ( int i = firstNum ; i <= lastContingNum ; i++ )
    {
        add = add + i;

        printf("%d \n", add);
    }

    //printf("Your addition from %d to %d number is : %d \n", firstNum, lastContingNum, add);


    /*int add = 0;
    for ( int i = 1 ; i <= 10 ; i++ )
    {
        add = add + i;
        //printf("%d \n", add);
    }

    printf("%d \n", add);*/

   return 0;
}

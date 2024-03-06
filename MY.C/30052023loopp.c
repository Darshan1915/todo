#include <stdio.h>
int main ()
{
    //outer loop
    // int i = 1 - used for initialization
    // i <= 5 - it is a conditions
    // i++ - increment
    for ( int i=1 ; i <=5 ; i++)
   {
       //inner loop - print number and it is depend on the outer loop conditions
       for ( int j = 1 ; j<=i ; j++)
       {
           printf("%d",i+j);

       }
       //it is use to create the new line
       printf("\n");

   }
    return 0 ;
}


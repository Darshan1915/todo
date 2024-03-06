
#include <stdio.h>
int main ()
{
  int number;

  printf("enter your number ");
  scanf("%d",&number);

  int result=  number +(number + 1) + (number + 2) + (number + 3) + (number + 4);

  printf(" your final addition is %d", result);
  return 0 ;
}


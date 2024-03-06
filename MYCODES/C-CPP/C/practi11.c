#include <stdio.h>
int main ()
{
    int i = 0;
    int result = (i--)+(--i)+(--i)-(i+6)+(++i);
    printf("result = %d",result);

    int z = 5;
    int result1 = (z++)+(++z);
    printf("\nresult = %d",result1);

    int c=5;
    int result2 = (c+5)+(c++)-(--c)+(c++)+(++c);
    printf("\nresult = %d",result2);

    int x=2;
    int result3 = (x++)+(--x)+(++x);
    printf("\nresult = %d",result3);

    int k =5;
    int result4 = (k*5)+(k++)+(++k);
    printf("\nresult = %d",result4);

    int v=3;
    int result5 = (v+2)+(++v)*(--v)+(v++);
    printf("\nresult = %d",result5);

    return 0;
}
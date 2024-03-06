#include<stdio.h>
int main()
{
    int op;
    int a,b,add,sub,mult,div;;

    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    printf("enter the operation to perform : \n1.add \n2.substract \n3.divison \n4.mumtiplication \n");
    scanf("%d",&op);

    switch (op)
    {
        case 1:
        add =  a + b;
        printf("result is : %d",add);
        break;

        case 2:
        sub =  a - b;
        printf("result is : %d",sub);
        break;

        case 3:
        div =  a / b;
        printf("result is : %d",div);
        break;

        case 4:
        mult =  a * b;
        printf("result is : %d",mult);
        break;

    }

    return 0;
}
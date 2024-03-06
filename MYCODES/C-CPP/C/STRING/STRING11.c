#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter name : ");
    gets(a);
    //scanf("%s",&a);
    printf("Name : %s ",a);
    
    return 0;
}
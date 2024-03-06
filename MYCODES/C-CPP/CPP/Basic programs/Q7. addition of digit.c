//Q7. Write a C program to find the sum of digits of a positive integer.
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int n,sum=0;
    
    cout<<"Enter the number : ";
    cin>>n;
    
    while (n!=0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    cout<<"The sum of digits of a given integer is : "<<sum;
    
    /*int num, sum=0;

    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Reverse number is : ");
    while(num!=0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("%d",sum);*/

    return 0;
}
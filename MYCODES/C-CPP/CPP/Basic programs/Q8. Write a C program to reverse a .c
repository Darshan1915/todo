 //Q8. Write a C program to reverse a given number
#include <iostream>
using namespace std;
int main()
{
    int n,reverse;
    
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The reverse number is : ";
    while (n!=0)
    {
        reverse=n%10;
        n = n/10;
        cout<<reverse;
    }
    
    /*int num, sum=0;

    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Reverse number is : ");
    while(num!=0)
    {
        sum = num % 10;
        num = num / 10;
        printf("%d",sum);
    }*/

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // int num = 6;
    // cout<<"==>"<<num<<endl;
    // int *ptr = &num;
    // cout<<&num<<"\n"<<ptr<<"\n"<<*ptr<<endl;

//     cout<<"***********************"<<"\n";

//    char arr[10] = "abshdj";
//    cout<<arr<<endl;
//    cout<<&arr[0]<<endl;

//    cout<<"***********************"<<"\n";
  
//    char temp = 'z';
//    char *p = &temp;
//    cout<<"==>"<<p<<endl;
//    cout<<"==>"<<*p<<endl;

    cout<<"***********************"<<"\n";

    int num = 6;
    cout<<"==>"<<num<<endl;
    int *ptr = &num;
    int **ppttrr = &ptr;
    cout<<"==>"<<num<<"\n"<<&num<<"\n"<<ptr<<"\n"<<*ptr<<"\n"<<ppttrr<<"\n"<<**ppttrr<<endl;



    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    /*int num = 6;
    cout<<"==>"<<num<<endl;
    cout<<"adress of num "<<&num<<endl;
    */

   char arr[10] = "abshdj";
   cout<<arr<<endl;
   cout<<&arr[0]<<endl;
  
   char temp = 'z';
   char *p = &temp;
   cout<<"=="<<p<<endl;
   cout<<"=="<<*p<<endl;

    return 0;
}
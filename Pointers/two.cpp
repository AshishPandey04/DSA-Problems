#include<iostream>
using namespace std;
int main(){
int a =5;
int* ptr=&a;
cout<<"a:"<<a<<endl;
cout<<"&a:"<<&a<<endl;
// cout<<"*a:"<<*a<<endl;
cout<<"ptr:"<<ptr<<endl;
cout<<"&ptr:"<<&ptr<<endl;
cout<<"**************************"<<endl;
// ptr=ptr+1;
cout<<"ptr:"<<ptr<<endl;
*ptr=*ptr/2;
cout<<"*ptr:"<<*ptr<<endl;
*ptr=*ptr+1;
cout<<"*ptr:"<<*ptr<<endl;


    return 0;
}
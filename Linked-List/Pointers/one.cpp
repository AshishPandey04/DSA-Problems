#include<iostream>
using namespace std;

int main(){
    int a = 5; 
    cout<<a<<endl;
    int* b = &a ;// pointer is created and initialised with address of a 
    cout<<b<<endl;
    cout<< "address of a : "<<&a<<endl;
    cout<< "address of b: "<<&b<<endl; 
    cout<<*b<<endl;
    cout<<sizeof(b)<<endl;
    char ch ='a';
    char* ptr = &ch;
     cout<<sizeof(ptr)<<endl;

     int* c ;
     cout<<*c;

    return 0;
}
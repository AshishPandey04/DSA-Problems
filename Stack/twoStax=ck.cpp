#include<iostream>
using namespace std;
class Stack{
    public:
        int* arr;
        int size;
        int top1;
        int top2;

        Stack(int capacity){
            arr= new int[capacity];
             size=capacity;
             top1=-1;
             top2=size;

        }
        void push1(int val){
            if(top2-top1==1){
                cout<<"Stack overflow "<<endl;
            }else{
                top1++;
                arr[top1]=val;
            }
            
        }
        void push2(int val){
            if(top2-top1==1){
                cout<<"Stack overflow "<<endl;
            }else{
                top2--;
                arr[top2]=val;
            }

        }
        void pop1(){
            if(top1==-1){
                cout<<"stack underflow"<<endl;

            }else{
                arr[top1]=0;
                top1--;
            }

            
        }
        void pop2(){
            if(top2==size){
                cout<<"stack underflow:"<<endl;

            }else{
                arr[top2]=0;
                top2++;
            }

        }

        void print(){
            cout << "printing stack" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        }

};
int main(){
    Stack s(5);
    s.print();
   
    s.push1(10);
    s.push1(20);
    s.push2(200);
    s.push2(100);
    s.push2(50);
    
    s.print();
    s.pop1();
    s.pop2();
   

    s.print();


return 0;

}

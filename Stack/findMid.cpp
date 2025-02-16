#include<iostream>
#include<stack>
using namespace std;
// void printmid(stack<int>& s, int mid, int count){
//     if(count==mid){
//         cout<<s.top()<<endl;
//         return;
//     }

//     // ek case hum karenge
//     int topElement=s.top();
//     s.pop();
//     count++;
//     // baki recursion karega 
//     printmid(s, mid , count);

//     // backtracking 
//     s.push(topElement);


// }

void insertAtBottom(stack<int>&s , int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    // 1 case hum karenge 
    int topElement=s.top();
    s.pop();
    // baki recursion
    insertAtBottom(s,val);


    // backtracking 
    s.push(topElement);

}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int val=500;
    insertAtBottom(s,val);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();

    }
    // int mid = s.size()/2;
    // int count=0;
    // printmid(s, mid , count);
    return 0;

}

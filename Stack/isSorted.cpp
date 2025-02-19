#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;
// bool isSorted(stack<int>&s,int num){
//     if(s.empty()){
//         return true;
//     }
//     // 1 case mein karunga
//     int topElement=s.top();
//     s.pop();

//     if(topElement>num){
//         return false;
//     }else{
//         num=topElement;
//         bool ans = isSorted(s,num);
//         return ans;

//     }

//     s.push(topElement);

// }
void insertSorted(stack<int> &s, int num)
{
    if(s.empty()){
        s.push(num);
        return;
    }
    if( s.top() < num)
    {
        s.push(num);
        return;
    }
    // 1 case mein karunga
    int topElement = s.top();
    s.pop();

    insertSorted(s, num);

    s.push(topElement);
}

int main()
{
    stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // int num=INT_MAX;
    // bool ans=isSorted(s,num);
    // cout<<ans<<endl;
    insertSorted(s, 23);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}

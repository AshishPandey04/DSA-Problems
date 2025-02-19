#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }
    // 1 case hum karenge
    int topElement = s.top();
    s.pop();
    // baki recursion
    insertAtBottom(s, val);

    // backtracking
    s.push(topElement);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        /* code */
        return;
    }
    int topEle = s.top();
    s.pop();

    reverse(s);

    insertAtBottom(s, topEle);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    cout << endl;
    reverse(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}

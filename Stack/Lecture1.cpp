#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int val)
    {
        if (top == size - 1)
        {
            // stack already full hain , so insert karne par Stack overflow ho jayega
            cout << "Stack Overflow" << endl;
        }
        else
        {
            // normal case stack is not full
            top++;
            arr[top] = val;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            // stack empty hain so pop nahi ho sakta
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[top] = 0;
            top--;
        }
    }

    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "there is no element at top , as Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    void print()
    {
        cout << "printing stack" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);
    s.print();
    s.push(10);
    s.push(20);
    s.push(30);

    s.push(40);
    s.push(50);
    s.print();
    // s.push(60);
    // s.print();
    cout << s.getTop() << endl;
    s.pop();
    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
    s.print();

    return 0;
}

// stack STL

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     // creation
//     stack<int> st;
//     // insertion
//     st.push(5);
//     st.push(10);
//     st.push(15);

//     //size
//     cout<<st.size()<<endl;

//     // check empty or not
//     cout<<st.empty()<<endl;

//     // getting top element
//     // peek karna
//     cout<<st.top()<<endl;

//     // removal
//     st.pop();
//       cout<<st.top()<<endl;

// }
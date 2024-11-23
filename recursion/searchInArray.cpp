#include<iostream>
using namespace std;

void search(int arr[], int size, int index, int searchElement)
{
    if (index == size)
    {
        cout << false;
        return;
    }
    if (arr[index] == searchElement)
    {
        cout << true;
        return;
    }
    search(arr, size, index + 1, searchElement);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int index = 0;

    int target = 50;
    search(arr, size, index, target);
    return 0;
}
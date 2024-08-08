#include <iostream>
#include<cstring>
using namespace std;

int getLength(char arr[], int size)
{
    int count = 0;
    int index = 0;
    while (arr[index] != '\0')
    {
        // jab tak array mein nullchar na mile increment karooo
        count++;
        index++;
    }
    return count;
}

void replaceChar(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '@')
        {
            arr[i] = ' ';
        }
        else if (arr[i] == '\0')
        {
            break;
        }
    }
    cout << arr << endl;
}

void upperCaseTOLowerCase(char arr[], int n)
{
    int len = getLength(arr, n);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];

        // if ch is lowercase then only convert it
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
            arr[i] = ch;
        }
    }
    cout << arr << endl;
}

bool palindrome(char arr[],int n ){
    int len = getLength(arr,n);
    int i =0 ;
    int j = len-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{

char arr1[100];
cin>>arr1;
cout<<endl;
char arr2[100];
cin>>arr2;

cout<<strlen(arr1)<<endl;

cout<< strcat(arr1,arr2)<<endl;










    // char arr[100];
    // cin.getline(arr,100);
    // bool res= palindrome(arr,100);
    // if(res){
    //     cout<<"the word is palindrome"<<endl;
    // }
    // else{
    //     cout<<"the word is not palindrome"<<endl;
    // }






    // char arr[100];
    // cin.getline(arr, 100);
    // upperCaseTOLowerCase(arr, 10);
    // // for converting to lowercase => use formula: ch=ch-'A'+'a';





    
    // char arr[100];

    // cin.getline(arr,100);
    // replaceChar(arr,100);

    //     //creation
    //     char arr[100];

    // cout<<"enter :";
    // // cin.getline(arr,100,'\t');
    // cin.getline(arr,100);
    // cout<<arr<<endl;

    // int ans=getLength(arr,100);
    // cout<<"length is :"<<ans<<endl;

    // cout<<"Enter your name:"<<endl;
    // // cin>>arr;

    // cin.getline(arr,100);

    // cout<<"your name is :"<<arr<<endl;
    // cout<<arr[0]<<"->"<<(int)arr[0]<<endl;
    // cout<<arr[1]<<"->"<<(int)arr[1]<<endl;
    // cout<<arr[2]<<"->"<<(int)arr[2]<<endl;
    // cout<<arr[3]<<"->"<<(int)arr[3]<<endl;
    // cout<<arr[4]<<"->"<<(int)arr[4]<<endl;
    // cout<<arr[5]<<"->"<<(int)arr[5]<<endl;

    return 0;
}
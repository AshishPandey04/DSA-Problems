#include<iostream>
using namespace std;
bool isSorted(int arr[], int n , int index){
    if(index==n-1){
        return true;
    }
    if(arr[index]>arr[index+1])return false;

    return isSorted(arr,n,index+1);


}
int main(){
    int arr[]={10,20,80,40,50};
    int n = 5;
    int index=0;
    bool ans= isSorted(arr,n,index);
    if(ans) cout<<"sorted";
    else cout<<"not sorted";
    return 0;
}
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int s, int e, int target){
    if(s>e) return -1;
    int mid = s+(e-s)/2;
    if(arr[mid]==target) return mid;

    if(arr[mid]<target){
        return binarySearch(arr,n,mid+1,e,target);
    }
    else{
        return binarySearch(arr,n,s,mid-1,target);
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n = 7;
    int s=0;
    int e=n-1;
    int target = 20;
    int ans= binarySearch(arr,n,s,e,target);
    cout<<"ans index:"<<ans;
    return 0;
}
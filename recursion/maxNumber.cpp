#include<iostream>
using namespace std;
int maxNumber(int arr[],int size, int index, int max){
    if(index==5) return max;

    if(arr[index]>max){
        max=arr[index];
    }
 int ans = maxNumber(arr,size,index+1,max);

 
 return ans;



}
int main(){
    int arr[]={10,120,70,50,5};
    int size=5;
    int index=0;
    int max=0;
    int ans = maxNumber(arr,size,index,max);
    cout<<"Maximum Number :"<<ans;
    return 0;
}
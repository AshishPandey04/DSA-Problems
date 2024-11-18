#include<iostream>
using namespace std;
int fibonnaci(int n){
    if(n==0 || n==1){
        return n;

    }
    int ans=fibonnaci(n-1)+fibonnaci(n-2);
    return ans;
}
int main(){
    int n = 9;
   int ans= fibonnaci(n);
   cout<<ans;
    return 0;

}
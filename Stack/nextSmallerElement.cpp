#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int>& arr, vector<int>&ans){
    stack<int>s;
    s.push(-1);
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        int num=arr[i];
        while(s.top()>=num){
            s.pop();
        }

        ans.push_back(s.top());
        s.push(num);
    }
}
int main(){
    vector<int>arr={7,5,4,10,3,4};
    vector<int>ans;

    solve(arr,ans);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
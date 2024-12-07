#include<iostream>
#include<vector>
using namespace std;
void sequence(string str, int index,string output,vector<string> &ans){
    if(index==str.length()){
        // cout<<output<<endl;
        ans.push_back(output);
        return;
    }

    char ch=str[index];
    //include 
    sequence(str,index+1,output+ch,ans);
    // exclude 
    sequence(str,index+1,output,ans);


}
int main(){
    string str="abc";
    int index=0;
    string output=" ";
    vector<string>ans;
    sequence(str,index,output,ans);
    for(auto it: ans){
        cout<<it<<endl;
    }
    return 0;

}
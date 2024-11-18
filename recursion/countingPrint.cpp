#include<iostream>
using namespace std;
auto print(int n ){
  if(n==0){
    return;
    
  }
      cout<<n<<endl;
    print(n-1);
}
int main(){
    int n =5;
    print(n);
    return 0;
}
#include<iostream>
using namespace std;

// bool isPowerOfFour(int n) {
//       //   if(n<4){
//       //      return false;
//       //   }
//       //   if(n%4!=0){
//       //      return false;
//       //   }
//       //   if(n==4) return true;
//       //   bool ans=true;

//       //   if(n%4==0){
//       //    ans=ans && isPowerOfFour(n/4);

//       //   }
       
//       //   return ans ;
//       // *********************************

//         if(n<=0){
//            return false;
//         }
//         if(n == 1){
//            return true;
//         }
//         if(n%4!=0){
//            return false;
//         }
       
//         return isPowerOfFour(n/4);
//     }





double myPow(double x, int n) {

       int p = abs(n);
       double ans = 1.0;
       while(p>=1){
          p /= 2 ;
          x *= x;
       }
       return n<0 ? 1/ans : ans;    
    }
    int main(){
      //   bool ans = isPowerOfFour(192);
      //   cout<<ans;
        return 0;
    }


// ********************************************************************************


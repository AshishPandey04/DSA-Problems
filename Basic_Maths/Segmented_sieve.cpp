#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> Sieve(int n ){
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=false;

    for(int i =2;i*i<=n;i++){
        if(sieve[i]){
            int j = i*i;
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

vector<bool> segSieve(int l, int r){

    // step 1 -> find primes till sqrt r and use them to find primes in segmented sieve 
    vector<bool>sieve=Sieve(sqrt(r));
    vector<int>basePrimes;
    for(int i =0 ; i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool>segmentedSieve(r-l+1,true);
    if(l==1||l==0){
        segmentedSieve[l]=false;
    }
    for(auto prime:basePrimes){
        int first_mul=(l/prime)*prime;
        first_mul=first_mul<l?first_mul+prime:first_mul;
        int j = max(first_mul,prime*prime);
        while(j<=r){
            segmentedSieve[j-l]=false;
            j+=prime;
        }
    }
    return segmentedSieve;

}

int main(){
    int l =110;
    int r =130;
    vector<bool>primes=segSieve(l,r);
    for(int i =0; i<primes.size();i++){
        if(primes[i])
         cout<<l+i<<" ";

    }
    cout<<endl;
    return 0;

}
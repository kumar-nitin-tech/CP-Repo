#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

long long factorial(long long k){
    long long fact = 1;
    for(long long i=2;i<=k;i++){
        fact = (fact * i) %mod;
    }
    return fact;
}

long long npr(long long k, long long n){
    long long p = 1, i=0;
    for(i=0;i<n;i++){
        p = (p*k) %mod;
        k--;
    }
    return p;
}


long long distanceColoring(long long &n,long long &k){
    if(n>=k)
        return factorial(k)%mod;
    
    else{
        return npr(k,n);
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k;
        cin>>n>>k;
        cout<<distanceColoring(n,k)<<endl;
    }
    return 0;
}
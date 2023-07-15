#include<bits/stdc++.h>
using namespace std;

long double density(int N, vector<int> par){
    long double height = 0;
    long long a = log2(N+1);
    if(pow(2,a) == N+1){
        height  = a;
    }
    else{
        height = a+1;
    }
    return par.size()/height;
}

int main(){
    int n;
    cin>>n;
    vector<int> par(n);
    for(auto &i: par){
        cin>>i;
    }
    cout<<density(n,par);
    return 0;
}
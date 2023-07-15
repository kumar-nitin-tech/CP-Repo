#include<bits/stdc++.h>
using namespace std;

void Problem(int n, int m){
    if(n == m){
        cout<<"YES"<<endl;
        return;
    }
    else if(n>m){
        n -= 1;
        m += 1;
    }
    else{
        n += 3;
        m -= 1;
    }
    if(n==m){
        cout<<"YES"<<endl;
    }
    else    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        Problem(n,m);
    }
    return 0;
}
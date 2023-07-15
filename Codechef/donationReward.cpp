#include<bits/stdc++.h>
using namespace std;

void solve(int x){
    if(x<=3)    cout<<"BRONZE"<<endl;
    else if(x>3 && x<=6)    cout<<"SILVER"<<endl;
    else if(x>6)    cout<<"GOLD"<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        solve(x);
    }
    return 0;
}
//It can be more clean and better after contest review other maths formula approach

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    int b=x,a=y*z;
    if(a%b ==0){
        cout<<a<<" "<<b<<endl;
    }
    else{
        b=y; a=x*z;
        if(a%b == 0){
            cout<<a<<" "<<b<<endl;
        }
        else{
            b=z; a=x*y;
            if(a%b == 0){
                cout<<a<<" "<<b<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n), dep(n);
    for(auto &i:arr) cin>>i;
    for(auto &i:dep) cin>>i;
    unordered_map<int,int> mp;
    for(auto i:arr){
        mp[i]++;
    } 
    for(auto i:dep){
        mp[i]++;
    }
    int maxi = 0;

    for(auto i:mp){
        maxi = max(maxi,i.second);
    }

    cout<<maxi<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
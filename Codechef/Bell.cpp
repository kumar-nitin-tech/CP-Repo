#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> weed(n);
    for(auto &i:weed)    cin>>i;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(weed[i] + k-1 <= m)  flag = true;
        else{
            flag = false;
        }
    }
    if(flag)    cout<<"yes"<<endl;
    else    cout<<"no"<<endl;
}

void solve2(){
    int n,m;
    cin>>n>>m;
    vector<int> q(m);
    for(auto &i:q){
        cin>>i;
    }
    vector<int> s(n+1,-1);
    int ans = 0;
    for(auto i:q){
        s[i] = 1;
    }
    for(int i=1;i<=n;i++){
        if(s[i] == -1){
            ans += i;
        }
    }
    cout<<ans<<"\n";
}

void solve3(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &i:arr)    cin>>i;

    int i =0,j=k;
    while(i<n && j<n){
        swap(arr[i],arr[j]);
        i++;j++;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve3();
    }
    return 0;
}
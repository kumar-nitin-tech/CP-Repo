#include<bits/stdc++.h>
using namespace std;

int groups(int &n, int &k, vector<int> &candies){
    sort(candies.begin(),candies.end());
    for(int i=0;i<n;i++){
        while(i<k){
            
        }
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> candies(n);
        for(auto&i:candies){
            cin>>i;
        }
        cout<<groups(n,k,candies);
    }
    return 0;
}
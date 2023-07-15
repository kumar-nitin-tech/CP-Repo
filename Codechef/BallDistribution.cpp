#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,m;
   cin>>n>>m;
   vector<int> arr(m);
   for(auto &i:arr) cin>>i;

   int totalSum=0;
   for(auto i:arr)  totalSum+=i;
   int valid = m*n;
   int rem = valid-totalSum;
   int ans = n-rem;
   cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
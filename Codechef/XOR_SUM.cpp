#include<bits/stdc++.h>
using namespace std;

int sumXOR(int l, int r){
    int count = 0;
    for(int i = l; i<=r;i++){
        for(int j=i+1;j<=r;j++){
            if((i&j) == 0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int t,l,r;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l>>r;
        cout<<sumXOR(l,r)<<"\n";
    }
    return 0;
}
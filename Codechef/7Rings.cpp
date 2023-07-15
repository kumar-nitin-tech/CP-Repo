#include<bits/stdc++.h>
using namespace std;

int countOf(int n){
    int count =0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int main(){
     int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int phoneNumber = n*x;
        if(countOf(phoneNumber) == 5)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
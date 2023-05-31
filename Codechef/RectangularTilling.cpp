#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int w,l;
        cin>>w>>l;
        if((w*l) %2 == 0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
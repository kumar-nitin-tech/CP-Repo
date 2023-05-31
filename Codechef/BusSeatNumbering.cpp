#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n>=1 && n<=10){
            cout<<"Lower Double"<<endl;
        }

        else if(n>=11 && n<=15){
            cout<<"Lower Single"<<endl;
        }

        else if(n>=16 && n<=24){
            cout<<"Upper Double"<<endl;
        }
        else if(n>=25 && n<=30){
            cout<<"Upper Single"<<endl;
        }
        else{
            cout<<"Not Available"<<endl;
        }
    }
    return 0;
}
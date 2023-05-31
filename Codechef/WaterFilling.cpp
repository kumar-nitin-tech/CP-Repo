#include<bits/stdc++.h>
using namespace std;

void waterFill(int &b1, int &b2, int &b3){
    if(b1>0){
        if(b2>0){
            cout<<"Not now"<<endl;
        }
        else if(b3>0){
            cout<<"Not now"<<endl;
        }
        else{
            cout<<"Water filling time"<<endl;
        }
    }
    else if(b2>0){
        if(b1>0){
            cout<<"Not now"<<endl;
        }
        else if(b3>0){
            cout<<"Not now"<<endl;
        }
        else{
            cout<<"Water filling time"<<endl;
        }
    }
    
    else{
        cout<<"Water filling time"<<endl;
    }

}

int main(){
    int t,b1,b2,b3;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>b1>>b2>>b3;
        waterFill(b1,b2,b3);
    }
    return 0;
}
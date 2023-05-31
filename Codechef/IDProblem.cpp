#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c == 'B'|| c=='b'){
            cout<<"BattleShip"<<"\n";
        }
        else if(c=='C' || c == 'c'){
            cout<<"Cruiser"<<"\n";
        }
        else if(c=='D' || c=='d'){
            cout<<"Destroyer"<<"\n";
        }
        else if(c=='F'|| c=='f'){
            cout<<"Frigate"<<"\n";
        }
        else{
            cout<<"Inavlid Input"<<"\n";
        }
    }
    return 0;
}
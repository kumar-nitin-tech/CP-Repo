#include<bits/stdc++.h>
using namespace std;

void score(int n, string s){
    int Ascore = 0, Bscore = 0; 
    if(s[0] == 'A') Ascore = 1;

    for(int i=1;i<s.size();i++){
        if(s[i] == 'A' && s[i-1] == 'A'){
            Ascore++;
            continue;
        }
        else if(s[i] == 'B' && s[i-1] == 'B'){
            Bscore++;
            continue;
        }
        else{
            continue;
        }
    }

    cout<<Ascore<<" "<<Bscore<<endl;
}

int main(){
    int t,n;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>n>>s;
        score(n,s);
    }
    return 0;
}
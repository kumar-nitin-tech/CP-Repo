#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<string>s(n);
    int countA =0, countB =0,countO =0,countAB =0, ansCount = 0;
    for(int i=0;s.size();i++){
        if(s[i] == "A" || s[i] =="B" || s[i] =="O" || s[i] == "AB"){
            if(s[i] == "A"){
                if(countA > 0)  ansCount++;
                if(countAB>1)   ansCount++;  
                countA++;
            }

            else if(s[i] == "B"){
                if(countB > 0)  ansCount++;
                if(countAB>1)   ansCount++;  
                countB++;
            }

            else if(s[i] == "O"){
                ansCount++; 
                countO++;
            }

            else{
                if(countAB>0)   ansCount++;
                countAB++;
            }
        }
    }
    cout<<ansCount<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
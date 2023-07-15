#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> &om, vector<int> &addy){
    int maxOm = INT_MIN, maxAddy = INT_MIN, omCOunt = 0, addyCount =0;
    for(int i=0;i<n;i++){
        omCOunt++; addyCount++;
        if(om[i] == 0){
            omCOunt = 0;
        }
        if(addy[i] == 0) {
            addyCount = 0;
        }
        
        maxOm = max(maxOm,omCOunt);
        maxAddy = max(maxAddy,addyCount);
    }
    if(maxOm>maxAddy) cout<<"Om"<<endl;
    else if(maxAddy>maxOm) cout<<"Addy"<<endl;
    else cout<<"Draw"<<endl;
}

int main(){
    	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
        vector<int> om(n), addy(n);
        for(auto &i:om){
            cin>>i;
        }
        for(auto &i:addy){
            cin>>i;
        }
        solve(n,om,addy);
	}
    return 0;
}
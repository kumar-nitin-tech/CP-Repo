#include<bits/stdc++.h>
using namespace std;

bool checkSubSeq(int i, vector<int> &arr , int b, int andAns, vector<int> &temp){
    if(i == arr.size()){
        return false;
    }
    andAns &= arr[i];
    temp.push_back(arr[i]);
    if(andAns == b){
        return true;
    }
    bool pick = checkSubSeq(i+1,arr,b,andAns,temp);
    temp.pop_back();
    bool notPick = checkSubSeq(i+1,arr,b,andAns,temp);
    return false;
}

void solve(int n, vector<int> &arr, int b){
    vector<int> temp;
    if(checkSubSeq(0,arr,b,arr[0],temp)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,b;
	    cin>>n>>b;
        vector<int> arr(n);
        for(auto &i:arr){
            cin>>i;
        }
        solve(n,arr,b);
	}
    return 0;
}
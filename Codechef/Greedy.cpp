#include<bits/stdc++.h>
using namespace std;

bool check(string ans){
    stack<char> st;
    for(int i=0;i<ans.size();i++){
        if(st.empty()){
            st.push(ans[i]);
        }
        else if(st.top() != ans[i]){
            st.pop();
        }
        else{
            st.push(ans[i]);
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}

void greedy(int n, string s){
    string ans;
    ans[0] = '(';
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            ans[i] = ans[i-1];
        }
        else{
            if(ans[i-1] == '('){
                ans[i] = ')';
            }
            else{
                ans[i] = '(';
            }
        }
    }

    if(check(s)){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        greedy(n,s);
        cout<<endl;
    }
    return 0;
}
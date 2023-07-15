#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(auto &i:s){
        cin>>i;
    }
    stack<string> st;
    stack<string> temp;
    for(int i=0;i<n;i++){
        while(!st.empty()){
            if(st.top() == s[i]){
                st.pop();
            }
            else{
                temp.push(st.top());
                st.pop();
            }
        }
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
       
        st.push(s[i]);
    }
    string ans = "";
    while(!st.empty()){
        string top = st.top();
        ans += top.substr(top.length()-2, top.length()-1);
        st.pop();
    }
    cout<<ans;
    return 0;
}
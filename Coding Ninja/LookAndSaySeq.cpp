#include<bits/stdc++.h>
using namespace std;

//TC: o(m), m-> prev seq length
string nextSeqUtil(string &Seq){
    int count = 1;
    string next = "";
    for(int i=1; i<Seq.size(); i++){
        //if my current char of the string is not equal to the prev char then we append it into in the next Seq
        if(Seq[i] != Seq[i-1]){
            string freq = to_string(count);
            next+=freq;
            next.push_back(Seq[i-1]);
            count = 1;
        }
        else    count++;
    }
    string freq = to_string(count);
    next+=freq;
    next.push_back(Seq[Seq.size()-1]);
    return next;
}

//TC: O(n*m) , n-> given integer
string lookAndSaySequence(int n) {
    if(n==1)    return "1";
    if(n==2)    return "11";
    string Seq = "11";
    for(int i=3; i<=n; i++){
        Seq = nextSeqUtil(Seq);
    }
    return Seq;
}

//Another Approach
string lookAndSaySequenceA(int n){
    if(n==1)    return "1";
    string prev = "1";

    for(int i=1; i<n; i++){
        string curr = "";
        int count = 1;
        for(int j=1; j<prev.size()+1; j++){
            if(prev[j] == prev[j-1]){
                count++;
            }
            else{
                curr = curr + to_string(count) + prev[j-1];
                count = 1;
            }
        }
        prev = curr;
    }
    return prev;
}


string lookAndSaySequenceC(int n){
    string ans = "1";
    int it=1;
    while(it<n){
        it++;
        int count = 0;
        string res = "";
        for(int i=0; i<ans.size(); i++){
            //here we check if the ans[i] is equal to next of string char
            char temp = ans[i];
            //we increase count because we got a char  
            count++;
            if(ans[i] != ans[i+1]){
                char freq = (char) ('0' + count);
                res.push_back(freq);
                res.push_back(temp);
                count = 0;
            }else{
                continue;
            }
        }
        ans = res;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    string ans = lookAndSaySequenceA(n);
    cout<<ans;
    return 0;
}
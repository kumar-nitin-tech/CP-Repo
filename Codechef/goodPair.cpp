#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b){
//     if( b == 0){
//         return a;
//     }
//     gcd(b,a%b);
// }

// int lcm(int a, int b){
//     return (a*b)/gcd(a,b);
// }

int countPair(vector<int>&a){
    int count=0;
    unordered_map<int,int>map;
    for(int i=0;i<a.size();i++){
        map[a[i]]++;
    }
    // unordered_map<int,int>::iterator it;
    // for(it = map.begin();it != map.end();it++){
    //     int pair = (it->second*(it->second-1))/2;
    //     count += pair;
    // }

    for(auto i:map){
        int pair = (i.second*(i.second-1))/2;
        count += pair;
    }
    return count;
}

int main() {
	// your code goes here
	// int t;
	// cin>>t;
	// for(int i=0;i<t;i++){
	//     int n;
	//     cin>>n;
	//     vector<int>a(n);
	//     for(auto &i:a){
	//         cin>>i;
	//     }
	//     cout<<countPair(a)<<"\n";
	// }
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    cout<<countPair(a);
	return 0;
}

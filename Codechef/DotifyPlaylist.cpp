#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int> a, pair<int,int> b){
    return a.first>b.first;
}

int songsPlaylist(int &n,int&k, int&l, vector<pair<int,int>> &songs){
    sort(songs.begin(), songs.end(),comp);
    int count = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(songs[i].second == l){
            if(count<k){
                ans += songs[i].first;
                count++;
            }
        }
    }
    if(ans == 0){
        return -1;
    }
    else if(count !=k){
        return -1;
    }
    else{
        return ans;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,l;
        cin>>n>>k>>l;
        vector<pair<int,int>> songs(n);
        for(int i=0;i<n;i++){
            cin>>songs[i].first>>songs[i].second;
        }
        cout<<songsPlaylist(n,k,l,songs)<<endl;
    }
    return 0;
}
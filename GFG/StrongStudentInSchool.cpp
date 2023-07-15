#include<bits/stdc++.h>
using namespace std;

int diffSum(int n, int m, int arr[]){
    int sum = 0, maxAns = INT_MIN, minAns = INT_MAX;
    for(int i=0;i<m;i++){
        sum += arr[i];
    }
    for(int i=m;i<n;i++){
        int temp = sum - arr[i-m] + arr[i];
        minAns = min(minAns,min(sum,temp));
        maxAns = max(maxAns,max(temp,sum));
        sum = temp;
    }
    return maxAns - minAns;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<diffSum(n,m,arr);
    return 0;
}
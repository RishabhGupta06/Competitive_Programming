#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long> arr(n+1);
    vector<long long > pre(n+1);
    vector<long long> suff(n+1);
    pre[0] = 0;
    pre[1] = 0;
    arr[0] = INT_MAX;
    cin>>arr[1];
    for(int i =2;i<n+1;i++){
        cin>>arr[i];
        if(arr[i]<arr[i-1]) pre[i] = abs(arr[i]-arr[i-1])+pre[i-1];
        else pre[i] = pre[i-1];
    }
    suff[suff.size()-1] = 0;
    for(int i =suff.size()-2;i>=1;i--){
        if(arr[i]<arr[i+1]) suff[i] = abs(arr[i]-arr[i+1])+suff[i+1];
        else suff[i] = suff[i+1];

    }

    for(int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<pre[b] - pre[a]<<endl;
        }
        else cout<<suff[b] - suff[a]<<endl;
    }
}
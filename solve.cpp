#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    if(n-1 == k) cout<<-1<<endl;
    else{
        int x = n - k;
        
        int o = (x+1)/2;
        int z = x/2;


        int to = (n+1)/2;
        int tz = n/2;

        int ro = to - o;
        int rz = tz - z;

        for(int i =0;i< 1+ro;i++){
            cout<<"1";
        }
        for(int i = 0;i<1+rz;i++) cout<<"0";

        for(int i =2;i<x;i++){
            if(i%2 == 0) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;

    if(k != 10){
        for(int i = 1;i<=n ;i++) cout<<k;
    }
    else if( n == 1) cout<< -1;
    else{
        cout<<1;
        for(int i =1;i<n;i++) cout<<0;
    }
    cout<<endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
//    while (t--) {
        solve();
    // }
    
    return 0;
}
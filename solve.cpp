#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    int x = n/2;
    int m = x + (n - x*2);
    if(n<k) cout<<-1<<endl;
    else{
        if(m %k == 0) cout<<m<<endl;
        else{
            int z = m%k;
            cout<<m+k-z<<endl;
        }
    }
    
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
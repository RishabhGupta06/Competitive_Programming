#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    
    if(n ==0) {cout<<1<<endl;

}
else{
    n = n%4;
    if(n == 1) cout<<8<<endl;
    else if(n == 2 ) cout<<4<<endl;
    else if(n == 3) cout<<2<<endl;
    else cout<<6<<endl;
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
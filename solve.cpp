#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;


    int x =0, y =0, z = 0;
    for(int i =0;i<n;i++){
        int q,w,r;
        cin>>q>>w>>r;
        x += q;
        y += w;
        z +=r;
    }
    if(x == 0 && y == 0 && z == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
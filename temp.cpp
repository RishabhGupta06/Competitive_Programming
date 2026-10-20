#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l , a,b,c;
    cin>>l>>a>>b>>c;

    int ans =-1;

    for(int i =0;i*a<=l;i++){
        for(int j =0;(a*i)+(b*j)<=l;j++){
            int rem = l - i*a - j*b;

            if(rem% c ==0) ans = max(ans,i+j+(rem/c));
        }
    }
    cout<<ans<<endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int Ax,Ay,Bx,By,Cx,Cy;
    cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

    int ans = 1;

    if(Bx<Ax && Ax<Cx || Bx>Ax && Ax>Cx) ans+=0;
    else {
        ans += min(abs(Bx-Ax),abs(Cx-Ax));
    }
    if(By<Ay && Ay<Cy || By>Ay && Ay>Cy) ans+=0;
    else {
        ans += min(abs(By-Ay),abs(Cy-Ay));
    }
    cout<<ans<<endl;
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
    
    // return 1;
}
#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long y =0;
    int x =0;
    if(n%a != 0) x += n/a+1;
    else x += n/a;
    if(m%a != 0) y += m/a+1;
    else y += m/a;
    
    cout<<x*y<<endl;

}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
   // while (t--) {
        solve();
    //}
    
    return 0;
}
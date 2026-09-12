#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,l;
    cin>>n>>l;

    if(n<=l){
        long long x = l/n;
        l += x;
        long long y = l/n;
        l = l+y-x;
        


    }
    else cout<<l<<endl;
    
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
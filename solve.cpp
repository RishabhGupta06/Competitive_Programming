#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long prod = 1;
    int gcdi = 0;
    for(int i =1;i<=n;i++){ prod *= i;
    gcdi = __gcd(gcdi,i);
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
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> w(n + 1);
    
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    
    int a = 0; // Max of even indices
    int b = INT_MAX; // Min of odd indices
    
    for (int z = 1; z <= n; z++) {
        if (z % 2 == 1) {
            b = min(b, w[z]);
        } else { 
            a = max(a, w[z]);
        }
    }

    if (b - a > 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
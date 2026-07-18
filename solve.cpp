#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // Cross multiply to avoid decimal/integer division issues
    long long x = a * d;
    long long y = b * c;
    
    // Case 0: Already equal
    if (x == y) {
        cout << 0 << "\n";
    }
    // Case 1: One of them is 0 (we just multiply the other's numerator by 0)
    else if (x == 0 || y == 0) {
        cout << 1 << "\n";
    }
    // Case 1 (continued): One cross-product is a multiple of the other
    else if (x % y == 0 || y % x == 0) {
        cout << 1 << "\n";
    }
    // Case 2: Everything else takes exactly 2 claps
    else {
        cout << 2 << "\n";
    }
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0;
    int flips = 0;
    for (char c : s) {
        if (c == '1') {
            ones++;
        } else if (ones > 0) {
            flips++;
            if (flips > ones) {
                flips = ones;
            }
        }
    }

    cout << flips << '\n';
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
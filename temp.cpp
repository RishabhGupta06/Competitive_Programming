#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // The 4 absolute master patterns for any valid row
    string templates[4] = {"0011", "0110", "1001", "1100"};
    
    int ans = 0;
    
    // Test each of the 4 templates one by one
    for (int t = 0; t < 4; t++) {
        bool is_valid = true;
        
        // Compare the current template against the input string
        for (int i = 0; i < n; i++) {
            // If the character isn't a '?', it is locked in place.
            // If that locked character disagrees with the template's repeating pattern, this template is dead.
            if (s[i] != '?' && s[i] != templates[t][i % 4]) {
                is_valid = false;
                break;
            }
        }
        
        // If the template survived without any conflicts, count it!
        if (is_valid) {
            ans++;
        }
    }
    
    // The answer will always naturally be 0, 1, 2, or 4, 
    // so we don't even need to write the modulo 998244353 operation!
    cout << ans << "\n";
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
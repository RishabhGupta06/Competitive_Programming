#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int n4 = 0;
    int n2 = 0;
    
    // Step 1: Baseline counts
    for (char c : s) {
        if (c == '4') n4++;
        if (c == '2') n2++;
    }
    
    int current_deletions = n2;
    int ans = current_deletions;
    
    // Step 3: Linearly slide the split point from left to right
    for (char c : s) {
        if (c == '4') continue; // '4's are already handled completely
        
        if (c == '1' || c == '3') {
            // A '1' or '3' just crossed into the left-side zone (2s only).
            // Since it shouldn't be here, it must now be deleted.
            current_deletions++;
        } 
        else if (c == '2') {
            // A '2' just crossed into the left-side zone (2s only).
            // It is now safely kept, meaning we save 1 deletion from the right side.
            current_deletions--;
        }
        
        // Track the absolute best partition arrangement found so far
        ans = min(ans, current_deletions);
    }
    
    // Total answer is the best split-point cost plus all mandatory '4' deletions
    cout << ans + n4 << "\n";
}

int main() {
    // Fast I/O Performance Boost
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
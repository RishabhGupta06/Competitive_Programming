#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Read as strings to handle inputs like "11100" correctly
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int ans = 0;
    
    // i controls the "layer" depth
    for (int i = 0; i < n / 2; i++) {
        // j travels along the top edge of the current layer.
        // It goes up to n - 1 - i to avoid double-counting the corners!
        for (int j = i; j < n - 1 - i; j++) {
            
            // Extract the 4 cells in this rotational cycle
            char c1 = arr[i][j];
            char c2 = arr[j][n - 1 - i];
            char c3 = arr[n - 1 - i][n - 1 - j];
            char c4 = arr[n - 1 - j][i];
            
            // Count how many '1's exist in this specific group of 4
            int ones = 0;
            if (c1 == '1') ones++;
            if (c2 == '1') ones++;
            if (c3 == '1') ones++;
            if (c4 == '1') ones++;
            
            int zeros = 4 - ones; // The rest must be '0's
            
            // Add the minimum cost to make all 4 identical
            ans += min(ones, zeros);
        }
    }
    cout << ans << "\n";
}

int main() {
    // Fast I/O for Codeforces
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Calculate the number of swaps needed
    int m = (n + 1) / 2;
    cout << m << "\n";
    
    // Left pointer starts at the first 'B' (index 1)
    int left = 1;
    
    // Right pointer starts at the last 'N' (index 3*n)
    int right = 3 * n;
    
    // Perform exactly 'm' swaps
    for (int i = 0; i < m; i++) {
        cout << left << " " << right << "\n";
        
        // Move to the next 'B' (jump over 'A' and 'N')
        left += 3;
        
        // Move backward to the next 'N' (jump over 'A' and 'B')
        right -= 3;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
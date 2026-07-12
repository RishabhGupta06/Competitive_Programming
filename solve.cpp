#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Shift to a 1-indexed prefix array initialized with 0
    vector<int> pre(n + 1, 0);
    for(int i = 0; i < n; i++){
        pre[i + 1] = pre[i] + arr[i];
    }
    
    // Check the final total sum
    if(pre[n] < s){
        cout << -1 << "\n";
        return;
    }

    int l = 1; // Pointers now start at 1
    int maxlen = -1;
    
    for(int r = 1; r <= n; r++){
        // The sum from index l to r is pre[r] - pre[l-1]
        while(l <= r && pre[r] - pre[l - 1] > s) {
            l++;
        }
        
        if(pre[r] - pre[l - 1] == s){
            // Because it's inclusive from l to r, length is r - l + 1
            maxlen = max(maxlen, r - l + 1);
        }
    }
    
    if(maxlen == -1) cout << maxlen << "\n";
    else cout << n - maxlen << "\n";
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
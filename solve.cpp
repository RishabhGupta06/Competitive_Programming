#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // The problem guarantees the input is already sorted, 
    // so we don't even need to use sort()!
    
    // Use long long for count just in case the total cuts get massive
    long long count = 0; 
    
    // Calculate our strict upper limit based on the smallest piece
    int limit = (2 * arr[0]) - 1;
    
    for(int i = 1; i < n; i++){
        // If the piece is larger than the limit, calculate the cuts instantly
        if (arr[i] > limit) {
            count += (arr[i]) / limit;
        }
    }
    
    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
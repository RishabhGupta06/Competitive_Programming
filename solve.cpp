#include <bits/stdc++.h>
using namespace std;

// Helper function to calculate the luckiness of a single number
int getLuckiness(int n) {
    int max_digit = 0;
    int min_digit = 9;
    
    // Extract digits one by one
    while (n > 0) {
        int digit = n % 10;
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);
        n /= 10;
    }
    
    return max_digit - min_digit;
}

void solve() {
    int l, r;
    cin >> l >> r;
    
    int best_number = l;
    int best_score = -1;

    for (int i = l; i <= r; i++) {
        int current_score = getLuckiness(i);
        
        if (current_score > best_score) {
            best_score = current_score;
            best_number = i;
        }
        
        // THE MAGIC SPEED BOOST: 
        // 9 is the absolute maximum possible luckiness (9 - 0 = 9).
        // Since we are guaranteed to find a 9 within any 100 consecutive numbers,
        // we can stop searching immediately to prevent Time Limit Exceeded!
        if (best_score == 9) {
            break; 
        }
    }
    
    cout << best_number << "\n";
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
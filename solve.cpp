#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
int max_streak = 1;
    int current_streak = 1;
    for(int i = 1; i < n; i++){
        // If the difference is valid, the streak grows!
        if((arr[i] - arr[i-1]) <= k){
            current_streak++;
        } 
        // If the gap is too big, the streak resets back to 1
        else {
            current_streak = 1;
        }
        
        // Constantly update the maximum streak we've seen so far
        max_streak = max(max_streak, current_streak);
    }

    cout<<n - max_streak<<endl;
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
    
    // return 1;
}
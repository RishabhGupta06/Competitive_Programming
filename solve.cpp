#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            mp[a]++;
        }
        
        int num = -1;
        int prev_count = 0; // We need to remember the count of the previous element
        int total_sets = 0; // This will just accumulate our answer
        
        for(auto x : mp) {
            if(num == -1) { 
                // Very first element: we must open 'x.second' sets
                num = x.first;
                total_sets += x.second;
            }
            else {
                // Condition 1: The sequence broke! 
                if(1 != x.first - num) { 
                    total_sets += x.second; // Must open brand new sets for all these dolls
                } 
                // Condition 2: Sequence continues, but we have EXTRA dolls
                else if(x.second > prev_count) {
                    total_sets += (x.second - prev_count);
                }
                
                num = x.first;
            }
            // Update prev_count for the next loop iteration
            prev_count = x.second;
        }
        
        cout << total_sets << "\n";
    }
    return 0;
}
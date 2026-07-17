#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n, sh, ss;
        cin >> n >> sh >> ss;
        
        int sleep_time = sh * 60 + ss;
        int ans = INT_MAX;
        
        // This will track the absolute earliest alarm of the day
        int earliest_alarm = INT_MAX; 
        
        for(int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            int alarm_time = x * 60 + y;
            
            // Keep track of the earliest alarm we see for the "next day" scenario
            earliest_alarm = min(earliest_alarm, alarm_time);
            
            // If the alarm is later today, calculate the difference
            if (alarm_time >= sleep_time) {
                ans = min(ans, alarm_time - sleep_time);
            }
        }
        
        // If ans is STILL INT_MAX, it means all alarms are for the next day
        if (ans == INT_MAX) {
            int time_to_midnight = 1440 - sleep_time;
            ans = time_to_midnight + earliest_alarm;
        }
        
        // Print hours and minutes
        cout << ans / 60 << " " << ans % 60 << "\n";
    }
    return 0;
}
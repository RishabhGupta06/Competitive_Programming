#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];

    for(int i =0;i<n;i++){
        int lo = 0;
        int hi = i;


            
            while(lo<hi){
                
                int mid =  (lo +hi)/2;
    
                if(arr[mid] < i - mid + 1) {
                lo = mid + 1; 
            } 
            // If it is valid, we try to find a longer valid subsequence to the left.
            else {
                hi = mid;
            }
            }
    
    
            cout<<i-lo+1<<" ";
        }
        
    cout<<endl;

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
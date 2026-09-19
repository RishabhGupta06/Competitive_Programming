#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n,l;
    cin>>n>>l;
    if(l<n){
        cout<<l<<endl;
    }
    else{
        long long hi = 2 * 1000000000;
        long long lo = 1;
        int ans =0;
        while(lo<=hi){
            long long mid = lo + (hi -lo)/2;
            
            long long count = mid/n;
            if(mid - count >= l){
                // cout<< mid<<endl;
                ans = mid;
                hi = mid -1;
            }
            
            else lo = mid+1;
        }
        cout<<ans<<"\n";
    }
    
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
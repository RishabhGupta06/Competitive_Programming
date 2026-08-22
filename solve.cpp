#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    
    vector<pair<long long,int>> arr;
    for(int i =1;i<=n;i++){ 
        long long x;
        cin>>x;
        if(i>x) arr.push_back({x,i});
    }

    long long ans = 0;
    for(int i =arr.size()-1;i>=0;i--){
        int lo = 0;
        int hi = i-1;
        long long z = arr[i].first;
        while(lo<=hi){
            int mid = lo +(hi - lo)/2;

            if(arr[mid].second <z) lo = mid+1;
            else hi = mid-1;
        }
        ans += hi+1;
    }
    
    cout<<ans<<endl;


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
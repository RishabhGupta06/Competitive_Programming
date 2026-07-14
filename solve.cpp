#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    long long sum =0;
    long long zero =0;
    bool flag = false;
    for(int i = 0;i<n-1;i++){
        if(arr[i] > 0) flag = true;
        if(arr[i] == 0 && flag) zero++;
        else sum += arr[i];
    }
    cout<<zero+sum<<"\n";
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
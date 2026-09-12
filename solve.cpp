#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,l;
    cin>>n>>l;

    vector<int> arr(n);

    for(int i =0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());

    double maxi = arr[0] - 0;

    for(int i =1;i<n;i++){
        maxi = max((double)(arr[i]-arr[i-1])/2,maxi);
    }
    maxi = max((double)(l-arr[n-1]),maxi);
    cout<<setprecision(10)<<maxi<<endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
//    while (t--) {
        solve();
    // }
    
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());
    int ans =0;
    for(int i =0;i<=n;i++){
        if(i == n){
            ans++;
        }
        else if(i == 0){
            if(arr[i]>i) ans++;
        }
        else if(arr[i-1]<i && arr[i]>i) ans++;
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
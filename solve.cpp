#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];

    int x =1;
    for(int i =0;i<n;i++){
        if(x == arr[i]) x++;
    }
    int ans = (n -x +k)/k;
    cout<<ans<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    // return 0;
}
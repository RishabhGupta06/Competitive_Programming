#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int a = 0;
    
    for(int i =0;i<n;i++){ cin>>arr[i];
    a = __gcd(a,arr[i]);
    }
    sort(arr.begin(),arr.end());
    cout<<arr[n-1]/a<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    // return 0;
}
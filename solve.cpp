#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<ll> time(n);
    vector<ll> spell(n);
    ll tsum =0; 
    for(int i =0;i<n;i++){ 
        cin>>time[i];
        tsum += time[i];
    }
    ll maxs = LLONG_MIN;
    ll spells =0;
    for(int i =0;i<n;i++){ cin>>spell[i];
        maxs = max(maxs,spell[i]);
        spells += spell[i];
    }
    cout<< tsum + spells - maxs<<"\n";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
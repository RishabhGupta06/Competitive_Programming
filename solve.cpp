#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> time(n);
    vector<int> spell(n);
    vector<pair<int,int>> r;
    for(int i =0;i<n;i++) cin>>time[i];
    for(int i =0;i<n;i++) cin>>spell[i];
    for(int i =0;i<n;i++) r.push_back({spell[i],i});
    sort(r.begin(),r.end());
    int t =0;
    for(int i =0;i<n;i++){
        t += time[r[i].second];
        int x = r[i].second;
        if(x == 0){
            time[1] += r[i].first;
        }
        else if(x == n-1) time[n-2] += r[i].first;
        else {
            time[x+1] += r[i].first;
            time[x-1] += r[i].first;
        }
    }
    cout<<t<<"\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int x,y,k;
    cin>>x>>y>>k;
    vector<pair<int,int>> arr(k);
    int r1,r2;
    cin>>r1>>r2;
    bool flag =false;
    for(int i =0;i<k;i++){ cin>>arr[i].first>>arr[i].second;
        if((arr[i].first+arr[i].second)%2 == (r1+r2)%2) flag = true;

    }
    if(flag) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    

    int o =0,z =0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x == 1) o++;
        else z++;
    }

    if(z<=o) cout<<"Bessie"<<endl;
    else cout<<"Elsie"<<endl;
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
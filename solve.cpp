#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;

    string s;
    cin>>s;

    int maxl = INT_MIN;
    int le=0;
    for(int i =1;i<n;i++){
        if(s[i-1] == s[i]) le++;
        else{
            maxl = max(maxl, le);
            le =0;
        }
    }
    maxl = max(maxl, le);
    
    cout<<maxl+2<<endl;

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
    
    // return 0;
}
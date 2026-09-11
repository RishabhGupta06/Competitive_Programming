#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    int maxi = INT_MIN;

    maxi = max(a+b+c,maxi);
    maxi = max((a*b)+c,maxi);
    maxi = max(a+(b*c),maxi);
    maxi = max(a+(b*c),maxi);
    maxi = max(a*(b*c),maxi);
    maxi = max((a+b)*c,maxi);
    maxi = max(a*(b+c),maxi);

    cout<<maxi<<endl;
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
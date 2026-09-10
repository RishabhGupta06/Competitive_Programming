#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);

    int a = 0;
    for(int i =0;i<n;i++){ cin>>arr[i];
        a = __gcd(a,arr[i]);
    }
    
    if(a == 1) cout<<0<<endl;
    else if(__gcd(a,n) == 1) cout<<1<<endl;
    else if(__gcd(a,n-1) ==1)cout<<2<<endl;
    else cout<<3<<endl;
    

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
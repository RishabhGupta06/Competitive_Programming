#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;

    int even =0;
    int ans =INT_MAX;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;

        if(x%2 ==0) even++;

        if(x%k ==0) ans =0;
        else{
            ans = min(ans,k - (x%k));
        }
    }

    if(k == 4){
        ans = min(ans, max(0,2-even));
    }
    cout<<ans<<endl;
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
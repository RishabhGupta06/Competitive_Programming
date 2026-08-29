#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> fr(m+2,0);
    for(int i =0;i<n;i++){
        fr[arr[i]]++;
    }
    
    vector<int> suff(m+2,0);
    for(int i = m-1;i>0;i--){
        suff[i] = suff[i+1]+fr[i+1];
    }
    int max_ans =0;
    for(int i = 1;i<=m;i++){
        max_ans = max((fr[i]+suff[i]+(2*i <= m ? fr[2*i] :0)),max_ans);
    }
    cout<<max_ans<<endl;
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
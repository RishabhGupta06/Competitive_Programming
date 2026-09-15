#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ;
    cin>>n;
    vector<int> arr(n+1);

    for(int i =1;i<=n;i++) cin>>arr[i];

    vector<bool> m(n,true);


    for(int i =1;i<=n;i++){
        long long start = arr[i]*i;
        long long end = (arr[i]+1)*i;

        for(long long j =start;j<end && j <n;j++){
            m[j] = false;
        }
    }
    vector<int> ans;
    for(int i =0;i<n;i++){
        if(m[i] == true) ans.push_back(i);
    }

    cout<<ans.size()<<endl;

    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;
    
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
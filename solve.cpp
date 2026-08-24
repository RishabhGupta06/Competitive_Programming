#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    long long sum =0;
    for(int i =0;i<n;i++){ cin>>arr[i];
        sum += arr[i];
    }
    // vector<int> ans(n);
    bool flag = false;
    for(int i =0;i<n;i++){
        if(sum >0 && n != 1){        
        if(i == n-1){
            if(sum == arr[i]) flag = true;
            sum -= sum;
            // cout<< sum<<endl;
        }
        else if(arr[i] != 1) {
            // arr[i] = 1;
            sum -= 1;
        }
        else{
            // arr[i] = 2;
            sum -= 2;
        }
    }
    else {flag = true;
    break;
}
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
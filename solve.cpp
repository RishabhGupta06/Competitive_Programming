#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,k;
    cin >> n>>k;

    vector<int> arr(n+1,0);
int bd =0;
    for(int i =1 ;i <=n;i++){
        cin>>arr[i];
        


        if(abs(arr[i] - i)%k != 0 ) bd++;
    }

    if(bd == 0) cout<<0<<endl;
    else if(bd == 2) cout<<1<<endl;
    else cout<<-1<<endl;


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
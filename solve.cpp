#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,m;
    cin>>n>>k>>m;

    int window = 1;
    int sum =0;
    if(m<k) cout<<"No"<<endl;
    else{
        cout<<"Yes"<<endl;
        int sum =0;
        for(int i =1;i<=n;i++){
            if(i%k == 0){
                cout<<m - (k-1)<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
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
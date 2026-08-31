#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    string suba1="",suba2 ="",subb1="",subb2 ="";
    for(int i =0;i<n;i++){
       if(i%2 == 0) suba1 += a[i];
       else suba2 += a[i];
       if(i%2 == 0) subb1 += b[i];
       else{ subb2 += b[i];
    }
    }
    sort(suba1.begin(),suba1.end());
    sort(suba2.begin(),suba2.end());
    sort(subb1.begin(),subb1.end());
    sort(subb2.begin(),subb2.end());
    if(suba1 == subb1 && suba2 == subb2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
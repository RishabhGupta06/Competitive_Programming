#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    long long sum = 3;
    

    
    if(n== 2)cout<<-1<<endl;
    else{
    for(int i =1;i<=n;i++){
        if(i<=2) cout<<i<<" ";
        else{
            cout<<sum<<" ";
            sum += sum;
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
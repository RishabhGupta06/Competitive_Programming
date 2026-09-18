#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n,l;
    cin>>n>>l;
    if(l<n){
        cout<<l<<endl;
    }
    else{
        long long x = l/(n-1);
        if(l%(n-1) == 0)  x--;
        
    
        long long y = x*n;
    
        cout<<y+(l-(x*(n-1)))<<endl;
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
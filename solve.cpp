#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int max_l = INT_MAX;
    int z =0;
    int l =1;
    for(int i =1;i<s.size();i++){
        if(s[i] != s[i-1]){
            l++;
        }
        if(i == n-1) break;
        if(s[i] != s[i-1] && s[i] != s[i+1]){
            if(s[i+1] == s[i-1]) z = 2;
            else z = max(z,1);
        }
    }
    cout<<l-z<<endl;
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
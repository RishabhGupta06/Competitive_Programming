#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin>>s;
    if(s[1] == 'a') cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2)<<endl;
    else cout<<s[0]<<" "<<s.substr(1,s.size()-2)<<" "<<s[s.size() -1]<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    // return 0;
}
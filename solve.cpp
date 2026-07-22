#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    vector<int> le(26,0);
    for(int i =0;i<s.size();i++){
        le[s[i] - 97]++;
    }
    if(le[0] == 0) for(int i =0;i<b;i++) cout<<'a';
    else{
        char c;
        int j =0;
        for (int i = 1; i <= b; i++)
        {
            int j =0;
            for(j;j<a/b;j++){
                if(le[j] != 0){
                    le[j]--;
                }
                else break;
            }
            cout<<char('a'+j);
        }
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
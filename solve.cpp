#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string a, b;
    cin >> a >> b;

    if(n-m != 3){
        cout<<"No\n";
        return;
    }

    vector<int> counta(26,0);
    vector<int> countb(26,0);


    for(char c: a) counta[c-'a']++;
    for(char c: b) countb[c-'a']++;

    for(int i =0;i<26;i++){
        int rem = counta[i] - countb[i];

        if(rem <0){
            cout<<"No\n";
            return;
        }

        char c = i+'a';
        if(c == 's' || c == 'i' || c == 'x'){
            if(rem != 1){
                cout<<"No\n";
                return;
            }
        }else{
            if(rem != 0){
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}
int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
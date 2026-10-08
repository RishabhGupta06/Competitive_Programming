#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    map<string,int> m;

    for(int i =0;i<n;i++){

        string s;
        cin>>s;
        if(m.find(s) != m.end()){
            cout<<s+to_string(m[s])<<endl;
        }
        else{
            cout<<"OK"<<endl;
        }
        m[s]++;

    }


}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }

    return 0;
}
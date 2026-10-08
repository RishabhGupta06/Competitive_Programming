#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    int even = 0;
    int odd =0;
    int idxe =0;
    int ideo =0;
    for(int i =0;i<n;i++) {
        int x;
        cin >>x;

        if(x%2 == 0){ even++;
        idxe = i;}
        else{ odd++;
        ideo = i;}

    }

    if(even == 1) cout<<idxe+1<<endl;
    else cout<<ideo+1<<endl;

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
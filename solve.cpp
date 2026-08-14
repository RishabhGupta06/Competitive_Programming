#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    bool flag = false;
    bool flag1 = false;
    for(int i =0;i<n;i++){
        int l,r;
        cin>>l>>r;
        if(l == k) flag = true;
        if(r == k) flag1 = true;
    }
    if(flag && flag1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // return 0;
}
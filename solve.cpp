#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<long long> arr(n+1);
    vector<long long> pre(n+1,0);
    for(int i =1;i<=n;i++){
        cin>>arr[i];

         pre[i] = pre[i-1] + arr[i];
        
    }

    while(q--){
        long long l,r,k;
        cin>>l>>r>>k;
        long long sum = pre[n];
        sum -= (pre[r]-pre[l-1]);
        sum += (r-l+1)*k;
        if(sum%2 == 0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

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
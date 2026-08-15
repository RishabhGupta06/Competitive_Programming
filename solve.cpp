#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int z =0,o =0,t =0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 0)  z++;
        else if(arr[i] == 1) o++;
        else t++;
    }

    if(z<=(n+1)/2){
        cout<<0<<endl;
    }
    else if(t>0 || (o==0 && t==0))cout<<1<<endl;
    else cout<<2<<endl;

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
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%2 == 0){
        cout<<"Yes"<<endl;
        for(int i =0;i<n/2;i++) cout<<1<<" "<<-1<<" ";
        cout<<endl;
    }
    else{
        if(n>3){
            cout<<"Yes"<<endl;
            int k = (n-1)/2;
            for(int i =0;i<k;i++) cout<<k-1<<" "<<-k<<" ";
            cout<<k-1<<endl;
        }
        else cout<<"No"<<endl;
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
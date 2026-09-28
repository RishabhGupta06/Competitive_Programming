#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    vector<pair<int,int>> arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second = (i+1)%2 ;
    }
    int l = 1, r = n;
    bool flag = true;
    sort(arr.begin(),arr.end());
    for(int i =0;i<n;i++){
        if(arr[i].second == l %2 ) l++;
        else if(arr[i].second == r%2) r--;
        else{
            cout<<"No"<<endl;
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
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
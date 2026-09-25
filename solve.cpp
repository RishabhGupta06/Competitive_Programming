#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, int> a, pair<long long, int> b) {
if (a.first == b.first) return a.second < b.second; // Tie: smaller index first
return a.first > b.first; // Primary: larger health first
}
void solve()
{
    long long n,k;
    cin>>n>>k;


    vector<pair<long long,int>>p(n);
    for(int i =0;i<n;i++){
        long long x;
        cin>>x;

        p[i] = {x%k,i+1};
        

        if(x%k == 0) p[i].first = k;

    }

    sort(p.begin(),p.end(),cmp);
    for(int i =0;i<p.size();i++){
        cout<<p[i].second<<" ";
    }
    cout<<endl;

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
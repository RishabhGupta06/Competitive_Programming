#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,t;
    cin>>n>>t;

    vector<int> arr(n);

    for(int i =0;i<n;i++) cin>>arr[i];
    int size =0;
    // using sliding window
    int i =0,j =0;
    int sum =0;

    while(i<n){
        sum += arr[i];
        if(sum > t){
            sum -= arr[j];
            j++;
        }
        else{
            size = max(size,i-j+1);
        }
        i++;

    }
    cout<<size<<endl;
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
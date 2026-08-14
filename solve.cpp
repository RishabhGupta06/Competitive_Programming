#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<arr.size();i++){
        cin>>arr[i];
    }
for(int i =0;i<n;i++){
            if(arr[i] == 1) arr[i]++;
        }

    for(int i =1;i<n;i++){
        if((arr[i]%arr[i-1] == 0)){
            arr[i]++;
        }
    }
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
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
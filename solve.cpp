#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());
    if (arr[0] == arr[n - 1]) {
        // Cast to long long to prevent overflow: 10^5 * 10^5 = 10^10
        cout << (long long)n * (n - 1) << "\n";
        return; 
    }
    long long first = 0,second =0;
    int i =0, j =n-1;
    while(arr[i] == arr[0] || arr[j] == arr[n-1]){
        if(arr[j] == arr[n-1]){
            second++;
            j--;
        }
        if(arr[i] == arr[0]){
            first++;
            i++;
        }
    }

     cout<<(first*second)*2<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    // return 0;
}
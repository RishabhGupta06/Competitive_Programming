#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,s;
    cin >> n>>s;
	vector<int> arr(n);
	for(int i =0;i<n;i++) cin>>arr[i];


	vector<int> pre(n);
	pre[0] = arr[0];
	for(int i =1;i<n;i++){
		pre[i] = pre[i-1] + arr[i];
	}
	

	if(pre[n-1] <s){
		cout<<-1<<endl;
		return;
	}


	int l = 1; // Pointers now start at 1
    int maxlen = -1;
    
    for(int r = 1; r <= n; r++){
        // The sum from index l to r is pre[r] - pre[l-1]
        while(l <= r && pre[r] - pre[l - 1] > s) {
            l++;
        }
        
        if(pre[r] - pre[l - 1] == s){
            // Because it's inclusive from l to r, length is r - l + 1
            maxlen = max(maxlen, r - l + 1);
        }
    }
	if(maxlen == -1)cout<<maxlen<<endl;
	else cout<<n -maxlen<<endl;
}

int main() {
    // Fast I/O for Codeforces
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>> arr(n,vector<int>(m) );
		for(int i =0;i<n;i++){
			for (int j = 0; j < m; j++)
			{
				cin>>arr[j][i];
			}
		}
		for(int i =0;i<m;i++){
			sort(arr[i].begin(),arr[i].end());
		}
		int ans =0;
		for(int i =0;i<m;i++){
			for(int j=0;j<n;j++){
				ans -= (arr[i][j] * (n - j - 1));
				ans += (arr[i][j] * j);
			}
		}
		cout<<ans<<endl;
	}
}

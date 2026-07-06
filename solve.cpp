#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		if(n<4){
			cout<<-1<<"\n";
			continue;
		}
		int mine = 1;
		int maxe =n;
		int i =0,j = n-1;
		while(i<j){
			int flag =true;
			if(arr[i] == mine) { 
                mine++;
                i++;
                flag = false;
            }
            else if(arr[j] == mine) { 
                mine++;
                j--;
                flag = false;
            }
            else if(arr[i] == maxe) {
                maxe--;
                i++;
                flag = false;
            }
            else if(arr[j] == maxe) {
                maxe--;
                j--;
                flag = false;
            }
			if(flag) {
                cout << i + 1 << " " << j + 1 << "\n";
                break;
            }
		}
		if(i>=j) cout<<-1<<"\n";
	}
}

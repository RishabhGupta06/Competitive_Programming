#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x,y;
		cin>>n>>x>>y;
		int q = n/x;
		int w = n/y;
		long long ans = n*(n+1)/2 - (n-q)*((n-q)+1)/2 - w*(w+1)/2;
		cout<<ans<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x,y;
		cin>>n>>x>>y;
		long long lcm_xy = (x / __gcd(x, y)) * y;
		long long gc = n / lcm_xy;
		long long q = n/x - gc;
		long long w = n/y - gc;
		long long ans = n*(n+1)/2 - (n-q)*((n-q)+1)/2 - w*(w+1)/2;
		cout<<ans<<"\n";
	}
}
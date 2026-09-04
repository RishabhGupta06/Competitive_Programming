#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;  // safer against overflow
}

// Function to compute LCM of numbers from 1 to n
long long lcmFrom1ToN(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    return result;
}
void solve(){
    int n;
    cin>>n;
 int lcm = lcmFrom1ToN(n) ;
 int sum =0;
for(int i =1;i<n;i++){
    cout<<i<<" ";
    sum += i;
}
    
cout<<lcm - sum<<endl;


}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
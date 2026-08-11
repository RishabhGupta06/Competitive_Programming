#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    long long n;
    cin>>n;
    long long x = (n*(n-1))%1000000007;
    long long fact =1;
    for (int i = 1; i <= n; i++)
    {
        fact =( fact*i)%1000000007;
    }
    cout<<(fact*x)%1000000007<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    // return 0;
}
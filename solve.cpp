#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) return false;
    
    // Check divisors from 2 up to sqrt(n)
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
return true; // No divisors found, it is prime
}

void solve()
{

    long long x;
    cin>>x;
    
    for(int i =0;i<x;i++){
long long n;
cin>>n;
    
     if( -(int)sqrt(n)+ (double)sqrt(n) ==0 && isPrime((int)sqrt(n)) ) {
        
         cout << "YES" <<endl;
     }
     else cout<<"NO"<<endl;
    }

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
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n; // Use long long for 10^18
        cin >> n;
        
        // We look for the first number that DOES NOT divide n
        // because the longest interval always starts at 1.
        for(long long i = 1; ; i++){
            if(n % i != 0){
                cout << i - 1 << endl;
                break; // We found the break in the chain, output and move to next test case
            }
        }
    }
    return 0;
}
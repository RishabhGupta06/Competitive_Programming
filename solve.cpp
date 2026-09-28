#include <bits/stdc++.h>
using namespace std;

vector<int> get_prime_factors(int x)
{
    vector<int> prime_factors;

    // Loop only up to the square root of x
    for (int i = 2; i * i <= x; i++)
    {

        // If i divides x, it is mathematically guaranteed to be prime
        if (x % i == 0)
        {
            prime_factors.push_back(i);

            // Exhaustively divide x by i to destroy all future multiples of i
            while (x % i == 0)
            {
                x = x / i;
            }
        }
    }

    // If anything is left over, it is a prime number greater than the square root
    if (x > 1)
    {
        prime_factors.push_back(x);
    }

    return prime_factors;
}
void solve()
{
    long long n, x;
    cin >> n >> x;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> prime_factors = get_prime_factors(x);

    long long max_stolen = 0; // Use long long to prevent the 32-bit overflow trap

    for (int p : prime_factors)
    {
        long long current_sum = 0;

        for (int i = 0; i < n; i++)
        {
            // If the pile shares this prime factor, we can steal 100% of it
            if (arr[i] % p == 0)
            {
                current_sum += arr[i];
            }
        }

        max_stolen = max(max_stolen, current_sum);
    }

    cout << max_stolen << "\n";
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
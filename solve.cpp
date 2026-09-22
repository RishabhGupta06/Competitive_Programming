#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long start = 1;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= q)
        {
            start++;
        }
        else
        {
           long long dif = start;
            if (dif >= k)
            {
                ans += (dif - k) * (dif + 1) - (dif * (dif + 1) / 2 - (k * (k + 1) / 2));
            }
            start = 1;
        }
    }
    long long dif = start;
    if (dif >= k)
        ans += (dif - k) * (dif + 1) - (dif * (dif + 1) / 2 - (k * (k + 1) / 2));

    cout << ans << endl;
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
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int low = 1;
        int high = i + 1;
        int best_d = 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[i - mid + 1] >= mid)
            {
                best_d = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout<<best_d<<" ";
    }
    cout<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // return 0;
}
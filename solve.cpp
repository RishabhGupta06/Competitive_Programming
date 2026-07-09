#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases

	while (t--)
	{
		int n;
		cin >> n;
		vector<long long> arr1(n);
		vector<long long> arr2(n);
		for (int i = 0; i < n; i++)
			cin >> arr1[i];
		for (int i = 0; i < n; i++)
			cin >> arr2[i];
		vector<long long> diff(n);
		for (int i = 0; i < n; i++)
		{
			diff[i] = arr1[i] - arr2[i]; // Positive = extra money, Negative = needs help
		}

		// Sort from poorest to richest
		sort(diff.begin(), diff.end());

		int ans = 0;
		int L = 0;
		int R = n - 1;

		// Two-Pointer loop
		while (L < R)
		{
			if (diff[L] + diff[R] >= 0)
			{
				// The rich person (R) successfully covers the poor person (L)
				ans++;
				L++;
				R--;
			}
			else
			{
				// Even the richest available person can't cover person L.
				// Person L has to stay home.
				L++;
			}
		}

		cout << ans << "\n";
	}
}

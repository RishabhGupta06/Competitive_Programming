#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases

	while (t--)
	{
		long long n;
		int m;
		cin >> n >> m;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		vector<int> gaps;
		for (int i = 1; i < m; i++)
		{
			gaps.push_back(a[i] - a[i - 1]-1);
		}
		gaps.push_back((n - a[m - 1]) + a[0] - 1);
		sort(gaps.rbegin(), gaps.rend());
		int day = 0, save = 0;
		for (int i = 0; i < gaps.size(); i++)
		{
			int curr = gaps[i] - 2 * day;
			if (curr <= 0)
			{
				break; // Gap is fully infected, and all smaller gaps are too
			}
			else if (curr == 1)
			{
				save += 1;
				day += 1; // Takes 1 day to secure
			}
			else
			{
				save += (curr - 1);
				day += 2; // Takes 2 days to secure both ends
			}
		}
		cout << n - save << "\n";
	}
}

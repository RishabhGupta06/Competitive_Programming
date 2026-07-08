#include <bits/stdc++.h>

using namespace std;

// Function to perform binary search on the prefix maximum array
// Returns the largest index for which pmax[index] <= val
int binSearch(vector<long long> &pmax, int n, int val)
{
	int low = 0, high = n - 1;
	int ans = -1; // Initialize answer to -1

	// Binary search loop
	while (low <= high)
	{
		int mid = (low + high) / 2; // Calculate mid index

		// Check if the current mid value is less than or equal to val
		if (pmax[mid] <= val)
		{
			ans = mid; // Update answer
			low = mid + 1; // Move to the right half
		}
		else
		{
			high = mid - 1; // Move to the left half
		}
	}

	return ans; // Return the largest index found
} // Time Complexity: O(log N)

int main()
{
	int t; // Number of test cases
	cin >> t;

	while (t--)
	{
		int n, q; // Number of steps and number of queries
		cin >> n >> q;

		vector<long long> steps(n), query(q); // Vectors to store steps and queries

		// Input the heights of the steps
		for (int i = 0; i < n; i++)
			cin >> steps[i]; // Time Complexity: O(N)

		// Input the queries
		for (int i = 0; i < q; i++)
			cin >> query[i]; // Time Complexity: O(N)

		vector<long long> pmax(n), psum(n); // Vectors for prefix maximum and prefix sum
		pmax[0] = steps[0]; // Initialize first element
		psum[0] = steps[0]; // Initialize first element

		// Calculate prefix maximum and prefix sum
		for (int i = 1; i < n; i++)
		{
			pmax[i] = max(pmax[i - 1], steps[i]); // Update prefix maximum
			psum[i] = psum[i - 1] + steps[i]; // Update prefix sum
		} // Time Complexity: O(N)

		// Process each query
		for (int i = 0; i < q; i++)
		{ // Time Complexity: O(q)
			int val = query[i]; // Current query value

			// Find the largest index where pmax[index] <= val
			int ind = binSearch(pmax, n, val); // Time Complexity: O(log N)

			// Output the result based on the index found
			if (ind == -1)
			{
				cout << "0 "; // If no such index, output 0
			}
			else
			{
				cout << psum[ind] << " "; // Output the prefix sum up to the found index
			}
		} // Time Complexity: O(q log N)

		cout << "\n"; // New line after each test case
	}

	return 0;
}

// Total Time Complexity: O(N + q log N)
// Total Space Complexity: O(N + q)

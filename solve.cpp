#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 2)
                count++;
            if (arr[i] >= 3)
                flag = true;
        }
        if (flag == true || count >=2){
            cout << "Yes" << "\n";
        }
        else
            cout << "No" << "\n";
    }
    return 0;
}
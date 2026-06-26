#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
            cout << 1 << endl;
        else
        {
            int one = 0, zero = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                    one++;
                else
                    zero++;
            }
            if (zero == one)
                cout << 0 << endl;
            else
                cout << 2 * min(zero, one) << endl;
        }
    }
}
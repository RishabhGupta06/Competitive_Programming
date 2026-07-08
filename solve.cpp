#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int one = 0, two = 0, three = 0;
        for(int i=0; i<n; i++) cin >> v[i];
        int flag = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)one++;
            else if(v[i]==2)two++;
            else three++;
            if(flag==0)
            {
                if(one>=(two+three))
                {
                    if(i<(n-1) && v[i+1]==3)
                    {
                        flag = 1;
                        i++;
                        one = 0, two = 0, three = 0;
                    }
                    else 
                    {
                        flag = 1;
                        one = 0, two = 0, three = 0;
                    }
                }
                else if(one==(two+three))
                {
                    flag = 1;
                    one = 0, two = 0, three = 0;
                }
            }
            else
            {
                if((two+one)>=three)
                {
                    if(i<(n-1)) 
                    {
                        flag = 2;
                        break;
                    }
                }
            }
        }
        if(flag==2) cout << "YES\n";
        else cout << "NO\n";
    }
}
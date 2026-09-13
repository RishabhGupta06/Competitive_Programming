#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >>k;

    if(2*n>k &&  k>=n){
        if(k == 2*n -1){
            for(int i =1;i<=n*n;i++){
                cout<<i<<" ";
                if(i%n == 0) cout<<"\n";
            }
        }
        else{
            int l =1;
            int x = (2 * n - k) + 1;
            // int g = 2*n;
            for(int i =0;i<(2*n-k);i++){
                for(int j =0;j<n;j++){
                    if(i == j){
                        cout<<l<<" ";
                        l++;
                    }
                    else{
                        cout<<x<<" ";
                        x++;

                    }
                }
                cout<<"\n";
            }
            for (int i = 2*n-k; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<x<<" ";
                    x++;
                }
                cout<<endl;
            }
            
            
        }
    }
    else cout<<-1<<endl;

}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
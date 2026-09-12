#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >>k;

    if(2*n>k &&  k>=n){
        if(k == 2*n -1){
            for(int i =1;i<=2*n;i++){
                cout<<i<<" ";
                if(i%n == 0) cout<<"\n";
            }
        }
        else{
            int l =1;
            int g = 2*n;
            for(int i =0;i<k;i++){
                for(int j =0;j<n;j++){
                    if(i ==j){
                        cout<<l<<" ";
                        l++;
                    }
                    cout<<g<<" ";
                    g--;
                }
                cout<<"\n";
            }
            for (int i = k+1; i <= n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<g<<" ";
                    g--;
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
    
    return 1;
}
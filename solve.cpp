#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;


    int n1 =0;
    int n2 =0;
    int n3 =0;


    for(int i =0;i<n;i++){
        int x;
        cin>>x;

        if(x%2 != 0){
            n1++;
        }
        else if(x%4 == 0) n3++;
        else n2++;
    }

    cout<<max({n1,n2,n3})<<endl;

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
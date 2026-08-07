#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin>>n;
    if(n%2 != 0){
        for(int i =0;i<n;i++) cout<<"7"<<" ";
        cout<<endl;
    }
    else{
        for(int i =0;i<n-2;i++) cout<<"2"<<" ";
        cout<<"1"<<" "<<"3"<<endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
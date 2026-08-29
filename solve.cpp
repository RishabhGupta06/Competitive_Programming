#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<vector<int>> &x, string &col, int &ans){
    int temp =0;

    if(col[node-1] == 'W') temp++;
    else temp--;

    int no_child = x[node].size();

    for(int i =0;i<no_child;i++){
        int child = x[node][i];

        temp += dfs(child,x,col,ans);
    }
    if(temp == 0) ans++;
    return temp;
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> x(n+1);
    for(int i =2;i<=n;i++){
        int z;
        cin>>z;
        x[z].push_back(i);
    }

    string col;
    cin>>col;

    int ans =0;
    dfs(1, x, col, ans);

    cout<<ans<<endl;
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
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    int mine = min(x,y);
    int maxe = max(x,y);
    if(mine !=0 || maxe == 0 || (n-1)%maxe != 0){
        cout<<-1<<endl;
    }
    else{
int winner = 1; 
        
        for(int i = 1; i <= n - 1; i++){
            // 1. We ALWAYS print the winner for game i
            cout << winner << " ";
            
            // 2. If the current game is a multiple of maxe, 
            //    it means this player just finished their required wins!
            if (i % maxe == 0) {
                // The new player stepping up for the next game (i + 1) is (i + 2)
                winner = i + 2; 
            }
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
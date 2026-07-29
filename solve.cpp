#include <bits/stdc++.h>
using namespace std;

void solve() {

    vector<string> arr(8);
    for(int i =0;i<8;i++){ cin>>arr[i];}

for(int i = 0; i < 8; i++) {
        if(arr[i] == "RRRRRRRR") {
            cout << "R\n";
            return; // We found the red stripe, we are done with this test case!
        }
    }

    // 4. If we checked all 8 rows and didn't find a solid red row, 
    // it means a blue stripe (which is vertical) MUST have been drawn last.
    cout << "B\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
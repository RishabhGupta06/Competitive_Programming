#include <bits/stdc++.h>
using namespace std;

// DFS function to calculate the balance of each subtree
int dfs(int node, const vector<vector<int>>& adj, const string& colors, int& balanced_count) {
    int current_balance = 0;
    
    // 1. Calculate the score of the current node's color
    // Note: 'colors' string is 0-indexed, but our nodes are 1-indexed (1 to n)
    if (colors[node - 1] == 'W') {
        current_balance += 1;
    } else {
        current_balance -= 1;
    }
    
    // 2. Ask all children for their balance scores and add them up
    for (int child : adj[node]) {
        current_balance += dfs(child, adj, colors, balanced_count);
    }
    
    // 3. If the total score of this subtree is 0, it has an equal number of W and B!
    if (current_balance == 0) {
        balanced_count++;
    }
    
    // 4. Return this subtree's total score up to its parent
    return current_balance;
}

void solve() {
    int n;
    cin >> n;
    
    // Create an adjacency list for 1-based indexing
    vector<vector<int>> adj(n + 1);
    
    // Read the parent array (starts giving parents for vertex 2)
    for (int i = 2; i <= n; i++) {
        int parent;
        cin >> parent;
        adj[parent].push_back(i); 
    }
    
    // Read the colors of the vertices
    string colors;
    cin >> colors;
    
    // Track the total number of perfectly balanced subtrees
    int balanced_count = 0;
    
    // Start the DFS from the root of the tree (Node 1)
    dfs(1, adj, colors, balanced_count);
    
    // Print the final answer for this test case
    cout << balanced_count << "\n";
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
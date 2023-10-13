#include <iostream>
#include <vector>
using namespace std;

// Simplified Christofides
int tsp_christofides_like(vector<vector<int>> &dist, int n) {
    vector<bool> in_tree(n, false);
    vector<int> min_edge(n, INT_MAX);
    min_edge[0] = 0;
    
    for (int i = 0; i < n; i++) {
        int u = -1;
        for (int j = 0; j < n; j++) {
            if (!in_tree[j] && (u == -1 || min_edge[j] < min_edge[u])) {
                u = j;
            }
        }
        
        in_tree[u] = true;
        for (int v = 0; v < n; v++) {
            if (dist[u][v] < min_edge[v]) {
                min_edge[v] = dist[u][v];
            }
        }
    }
    
    int min_path = 0;
    for (int i = 0; i < n; i++) min_path += min_edge[i];
    return min_path;
}
Christofides

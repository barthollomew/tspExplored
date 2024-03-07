#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

int tsp_christofides_like(const std::vector<std::vector<int>>& dist) {
    int n = dist.size();
    std::vector<bool> in_tree(n, false);
    std::vector<int> min_edge(n, INT_MAX);
    min_edge[0] = 0;

    for (int i = 0; i < n - 1; i++) {
        int u = -1;
        for (int j = 0; j < n; j++) {
            if (!in_tree[j] && (u == -1 || min_edge[j] < min_edge[u])) {
                u = j;
            }
        }

        in_tree[u] = true;

        for (int v = 0; v < n; v++) {
            if (!in_tree[v] && dist[u][v] < min_edge[v]) {
                min_edge[v] = dist[u][v];
            }
        }
    }

    int min_path = 0;
    for (int i = 0; i < n; i++) {
        min_path += min_edge[i];
    }

    return min_path;
}

int main() {
    std::vector<std::vector<int>> dist = {
        {0, 3, 4, 2, 7},
        {3, 0, 4, 6, 3},
        {4, 4, 0, 5, 8},
        {2, 6, 5, 0, 6},
        {7, 3, 8, 6, 0}
    };

    int min_path = tsp_christofides_like(dist);
    std::cout << "Minimum path cost: " << min_path << std::endl;

    return 0;
}

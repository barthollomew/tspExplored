#include <climits>
#include <iostream>
#include <vector>

int tsp_greedy(const std::vector<std::vector<int>>& dist) {
    int n = dist.size();
    std::vector<bool> visited(n, false);
    visited[0] = true;

    int min_path = 0;
    int current_vertex = 0;

    for (int i = 0; i < n - 1; i++) {
        int next_vertex = -1;
        int min_dist = INT_MAX;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && dist[current_vertex][j] < min_dist) {
                min_dist = dist[current_vertex][j];
                next_vertex = j;
            }
        }

        visited[next_vertex] = true;
        min_path += min_dist;
        current_vertex = next_vertex;
    }

    min_path += dist[current_vertex][0];  // Return to start

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

    int min_path = tsp_greedy(dist);
    std::cout << "Minimum path cost: " << min_path << std::endl;

    return 0;
}

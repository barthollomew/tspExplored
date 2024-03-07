#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

int tsp_bruteforce(const std::vector<std::vector<int>>& dist) {
    int n = dist.size();
    std::vector<int> vertices(n - 1);
    for (int i = 0; i < n - 1; i++) {
        vertices[i] = i + 1;
    }

    int min_path = INT_MAX;
    do {
        int current_path = 0;
        int prev_vertex = 0;
        for (int vertex : vertices) {
            current_path += dist[prev_vertex][vertex];
            prev_vertex = vertex;
        }
        current_path += dist[prev_vertex][0];

        min_path = std::min(min_path, current_path);
    } while (std::next_permutation(vertices.begin(), vertices.end()));

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

    int min_path = tsp_bruteforce(dist);
    std::cout << "Minimum path cost: " << min_path << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int tsp_greedy(vector<vector<int>> &dist, int n) {
    vector<bool> visited(n, false);
    visited[0] = true;
    int min_path = 0;
    int current_vertex = 0;
    
    for (int i = 0; i < n-1; i++) {
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
    min_path += dist[current_vertex][0]; // Return to start
    
    return min_path;
}

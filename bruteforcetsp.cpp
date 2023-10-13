#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int tsp_bruteforce(vector<vector<int>> &dist, int n) {
    vector<int> vertices;
    for (int i = 1; i < n; i++) vertices.push_back(i);  // Skip 0 as the starting point
    
    int min_path = INT_MAX;
    do {
        int current_path = 0;
        int k = 0;
        for (int i = 0; i < vertices.size(); i++) {
            current_path += dist[k][vertices[i]];
            k = vertices[i];
        }
        current_path += dist[k][0];
        min_path = min(min_path, current_path);
    } while (next_permutation(vertices.begin(), vertices.end()));
    
    return min_path;
}

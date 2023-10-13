# coscalgorithms


Input Data:

Distance Matrix (dist) representing a complete graph with 5 vertices:
 0  3  4  2  7
 3  0  4  6  3
 4  4  0  5  8
 2  6  5  0  6
 7  3  8  6  0

Data Source:

- The distance matrix is synthetically generated.
- Distances are symmetric, ensuring the TSP graph is undirected.
- Diagonal entries are zero, indicating no self-loops.
- The matrix is created ensuring a certain level of variance in distances to produce a meaningful TSP instance.

Estimated Timings:

- Based on algorithm complexities
- For n = 5.

Algorithm            | Estimated Time (s) | Largest n in 30 min 
---------------------|--------------------|---------------------------------
Brute Force (O(n!))  | 0.0002             | 10
Greedy (O(n^2))      | 0.0001             | 400
Christofides    | 0.0001             | 400 


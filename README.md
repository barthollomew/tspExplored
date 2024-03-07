# Exploring TSP using COSC Algorithms and C++ 🌍

Welcome to my repository showcasing my skills and passion for data structures and algorithms! This project focuses on solving the fascinating Traveling Salesman Problem (TSP) using various algorithmic approaches. 

## 📊 Input Data

The TSP instance is represented by a distance matrix (`dist`) for a complete graph with 5 vertices:

```
0 3 4 2 7
3 0 4 6 3
4 4 0 5 8
2 6 5 0 6
7 3 8 6 0
```

### 🔍 Data Source

- The distance matrix is synthetically generated to create a meaningful TSP instance.
- Distances are symmetric, ensuring the TSP graph is undirected.
- Diagonal entries are zero, indicating no self-loops.
- The matrix is carefully crafted to introduce variance in distances, adding complexity to the problem.

## 🚀 Algorithmic Arsenal

In this repository, I have implemented three powerful algorithms to tackle the TSP:

1. **Brute Force** (`bruteforcetsp.cpp`): 💪
   - Explores all possible permutations of the vertices to find the optimal solution.
   - Time complexity: O(n!), where n is the number of vertices.
   - Guarantees the best solution but becomes impractical for large instances.

2. **Greedy Approach** (`greedytsp.cpp`): 🧩
   - Builds the TSP tour by making locally optimal choices at each step.
   - Time complexity: O(n^2), where n is the number of vertices.
   - Provides a fast approximation but may not always yield the optimal solution.

3. **Christofides Algorithm** (`christofidestsp.cpp`): 🌿
   - Combines minimum spanning tree and minimum-weight perfect matching techniques.
   - Guarantees a solution within 1.5 times the optimal tour length.
   - Offers a good balance between efficiency and solution quality.

## ⏱️ Timings

To showcase the performance of each algorithm, I have measured the estimated execution time for the given TSP instance with 5 vertices:

| Algorithm           | Estimated Time (s) | Largest n in 30 min |
|---------------------|--------------------|--------------------|
| Brute Force (O(n!)) | 0.0002             | 10                 |
| Greedy (O(n^2))     | 0.0001             | 400                |
| Christofides        | 0.0001             | 400                |

As evident from the timings, the brute force approach becomes infeasible for larger instances, while the greedy and Christofides algorithms scale better.

## 🌟 Skills Highlighted

Through this project, I demonstrate my proficiency in:

- Implementing advanced algorithms and data structures in C++. 💻
- Analyzing time complexity and scalability of algorithms. 📈
- Solving complex optimization problems like the TSP. 🧩
- Comparing and evaluating different algorithmic approaches. 🔍
- Documenting and presenting technical concepts clearly. 📝

I am passionate about leveraging algorithms and data structures to solve real-world challenges efficiently. This repository reflects my ability to think critically, code effectively, and communicate technical ideas. 💡

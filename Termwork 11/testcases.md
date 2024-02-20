## Test Case 1: Simple Linear Graph
### Input
- Number of cities: 4
- Number of roads: 3
- Roads: 0 1, 1 2, 2 3
- Starting city: 0
- Method: 1 (DFS)
### Expected Output
csharp
Copy code
```Cities reachable from city 0 using DFS:
0 1 2 3 ```

## Test Case 2: Graph with a Cycle
### Input
Number of cities: 3
Number of roads: 3
Roads: 0 1, 1 2, 2 0
Starting city: 0
Method: 1 (DFS)
### Expected Output
csharp
Copy code
Cities reachable from city 0 using DFS:
0 1 2
## Test Case 3: Disconnected Graph
### Input
Number of cities: 4
Number of roads: 2
Roads: 0 1, 2 3
Starting city: 0
Method: 1 (DFS)
### Expected Output
csharp
Copy code
Cities reachable from city 0 using DFS:
0 1
## Test Case 4: Complete Graph
### Input
Number of cities: 4
Number of roads: 12 (each city connected to every other city)
Roads: 0 1, 0 2, 0 3, 1 0, 1 2, 1 3, 2 0, 2 1, 2 3, 3 0, 3 1, 3 2
Starting city: 2
Method: 2 (BFS)
### Expected Output
csharp
Copy code
Cities reachable from city 2 using BFS:
2 0 1 3
## Test Case 5: Graph with No Roads
### Input
Number of cities: 3
Number of roads: 0
Starting city: 1
Method: 1 (DFS)
### Expected Output
csharp
Copy code
Cities reachable from city 1 using DFS:
1
## Test Case 6: Graph with Self-Loop
### Input
Number of cities: 3
Number of roads: 4
Roads: 0 1, 1 1, 1 2, 2 0
Starting city: 1
Method: 2 (BFS)
### Expected Output

Cities reachable from city 1 using BFS:
1 2 0

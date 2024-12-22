#include <stdio.h>

#define MAX_NODES 100

// Global variables
int graph[MAX_NODES][MAX_NODES]; // Adjacency matrix
int visited[MAX_NODES];          // Visited array

// Function to perform DFS
void dfs(int node, int nodes) {
    visited[node] = 1;           // Mark the node as visited
    printf("%d ", node);         // Print the current node

    // Visit all unvisited neighbors
    for (int i = 0; i < nodes; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(i, nodes);      // Recursively visit the neighbor
        }
    }
}

int main() {
    int nodes, edges;

    // Input the number of nodes and edges
    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // Input the edges
    printf("Enter the edges (node1 node2):\n");
    for (int i = 0; i < edges; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1; // Add edge to the adjacency matrix
        graph[v][u] = 1; // For undirected graph
    }

    // Input the starting node for DFS
    int start;
    printf("Enter the starting node: ");
    scanf("%d", &start);

    // Perform DFS
    printf("DFS Traversal: ");
    dfs(start, nodes);

    printf("\n");

    return 0;
}

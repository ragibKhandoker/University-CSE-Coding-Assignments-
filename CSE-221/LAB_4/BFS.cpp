#include <stdio.h>

#define MAX_NODES 100

// Global variables
int graph[MAX_NODES][MAX_NODES]; // Adjacency matrix
int visited[MAX_NODES];          // Visited array
int queue[MAX_NODES];            // Queue for BFS
int front = 0, rear = 0;         // Queue pointers

// Function to enqueue a node
void enqueue(int node) {
    queue[rear++] = node; // Add node to the rear of the queue
}

// Function to dequeue a node
int dequeue() {
    return queue[front++]; // Remove and return the front node of the queue
}

// BFS Function
void bfs(int start, int nodes) {
    visited[start] = 1;      // Mark the starting node as visited
    enqueue(start);          // Add the starting node to the queue

    printf("BFS Traversal: ");
    while (front < rear) {   // While the queue is not empty
        int current = dequeue(); // Remove the front node from the queue
        printf("%d ", current);  // Print the current node

        // Visit all unvisited neighbors
        for (int i = 0; i < nodes; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = 1;  // Mark the neighbor as visited
                enqueue(i);      // Add the neighbor to the queue
            }
        }
    }
    printf("\n");
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

    // Input the starting node for BFS
    int start;
    printf("Enter the starting node: ");
    scanf("%d", &start);

    // Perform BFS
    bfs(start, nodes);

    return 0;
}

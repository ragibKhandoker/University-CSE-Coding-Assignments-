#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 100
int graph[MAX_NODES][MAX_NODES];
int visited[MAX_NODES];
void dfs_traversal(int start, int nodes){
    visited[start] = true;
    cout << start << " ";
    for(int j=1; j<=nodes; j++){
        if(graph[start][j] == true && !visited[j]){
            dfs_traversal(j,nodes);
        }
    }
}
int main(){
    int nodes;
    cout << "Enter number of nodes: " << endl;
    cin >> nodes;
    int edges;
    cout << "Enter number of edges: " << endl;
    cin >> edges;
    for(int i=0; i<edges; i++){
        cout << "Enter edges: " << endl;
        int x1,x2;
        cin >> x1 >> x2;
        graph[x1][x2] = 1;
        graph[x2][x1] = 1;
    }
    int start;
    cout << "Enter the starting node: " << endl;
    cin >> start;
    cout << "DFS traversal: " << endl;
    dfs_traversal(start,nodes);
    cout << endl;
    return 0;

}
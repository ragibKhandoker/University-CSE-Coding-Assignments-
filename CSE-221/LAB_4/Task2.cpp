#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 100
int graph[MAX_NODES][MAX_NODES];
int visited[MAX_NODES];
int que[MAX_NODES];
int count1 = 0;
int count2 = 0;
void enqueue(int n1){
    que[count1++] = n1;
}
int dequeue(){
    return que[count2++];
}
void bfs_traversal(int start,int nodes){
    visited[start] = true;
    enqueue(start);
    cout << "BFS tratversal: " << endl;
    while(count1 > count2){
        int d1 = dequeue();
        cout << d1 << endl;
        for(int j=1; j<=nodes; j++){
            if(graph[d1][j] == true && !visited[j]){
                visited[j] = true;
                enqueue(j);
            }
        }
    }
    cout << "\n";

}
int main(){
    int c1;
    cout << "Enter number of nodes: " << endl;
    cin >> c1;
    int c2;
    cout << "Enter number of edges: " << endl;
    cin >> c2;
    for(int i=0; i<c2; i++){
        cout << "Enter edges: " << endl;
        int u1,v1;
        cin >> u1 >> v1;
        graph[u1][v1] = 1;
        graph[v1][u1] = 1;

    }
    int start;
    cout << "Enter the starting node: " << endl;
    cin >> start;
    bfs_traversal(start,c1);
    return 0;

}
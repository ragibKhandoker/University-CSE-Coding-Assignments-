#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<int> adj_mat[MAX_NODES];
int visited[MAX_NODES];
int dis[MAX_NODES];
pair<int,int> bfs_traverse(int start,int n1){
    int i=1;
    while(i<=n1){
        visited[i] = false;
        dis[i]=0;
        i++;
    }
    queue<int> q1;
    q1.push(start);
    visited[start] = true;
    int max_distance = 0;
    int far_node = start;
    while(!q1.empty()){
        int parent = q1.front();
        q1.pop();
        for(auto child : adj_mat[parent]){
            if(!visited[child]){
                visited[child] = true;
                dis[child] = dis[parent] +1;
                q1.push(child);
                if(dis[child]  > max_distance){
                    max_distance = dis[child];
                    far_node = child;
                }
            }
        }
    }
    return {far_node,max_distance};
}


int main(){
    freopen("input5.txt","r",stdin);
    freopen("output5.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n1;
    cin >> n1;
    if(!cin){
        return false;
    }
    for(int i=0; i<n1-1; i++){
        int a,b;
        cin >> a >> b;
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);

    }
    pair<int,int> bfs_1 = bfs_traverse(1,n1);
    int first_node = bfs_1.first;
    int max_dis1 = bfs_1.second;
    pair<int,int> bfs_2 = bfs_traverse(first_node,n1);
    int second_node = bfs_2.first;
    int max_dis2 = bfs_2.second;
    cout << max_dis2 << endl;
    cout << first_node << " " << second_node << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES = 200005;
vector<int> adj_list[MAX_NODES];
vector<bool> visited(MAX_NODES,false);
vector<int> dfs_array;
void dfs_traversal(int src){
    visited[src] = true;
    dfs_array.push_back(src);
    for(auto c : adj_list[src]){
        if(!visited[c]){
            dfs_traversal(c);
        }
    }
}
int main(){
    freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int node,edge;
    cin >> node >> edge;
    if(!cin){
        return false;
    }
    vector<int> arr1(edge);
    for(int i=0; i<edge; i++){
        cin >> arr1[i];
    }
    vector<int> arr2(edge);
    for(int j=0; j<edge; j++){
        cin >> arr2[j];
    }
    for(int y=0; y<edge; y++){
        adj_list[arr1[y]].push_back(arr2[y]);
        adj_list[arr2[y]].push_back(arr1[y]);

    }
    dfs_traversal(1);
    for(auto m : dfs_array){
        cout << m << " ";
    }
    cout << endl;
    return 0;
}
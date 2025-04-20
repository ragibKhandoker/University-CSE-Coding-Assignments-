#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES = 200005;
vector<int> adj_list[MAX_NODES];
vector<bool> visited(MAX_NODES,false);
vector<int> bfs_array;
void bfs_traver(int s_1){
    queue<int> q_1;
    q_1.push(s_1);
    visited[s_1] = true;
    while(!q_1.empty()){
        int par = q_1.front();
        q_1.pop();
        bfs_array.push_back(par);
        for(auto c_1 : adj_list[par]){
            if(!visited[c_1]){
                q_1.push(c_1);
                visited[c_1] = true;
            }
        }
    }
}
int main(){
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n1,e1;
    cin >> n1 >> e1;
    if(!cin){
        return false;
    }
    while(e1--){
        int x1,x2;
        cin >> x1 >> x2;
        adj_list[x1].push_back(x2);
        adj_list[x2].push_back(x1);
    }
    bfs_traver(1);
    for(auto z : bfs_array){
        cout << z << " ";
    }
    cout << endl;
    return 0;
}

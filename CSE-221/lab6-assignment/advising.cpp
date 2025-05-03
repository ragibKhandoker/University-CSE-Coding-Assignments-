#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<int> adj_mat[MAX_NODES];
int indegree[MAX_NODES] = {0};
int main(){
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n_1,e_1;
    cin >> n_1 >> e_1;
    if(!cin){
        return false;
    }
    for(int i=0; i<e_1; i++){
        int a1,b1;
        cin >> a1 >> b1;
        adj_mat[a1].push_back(b1);
        indegree[b1]++;

    }
    queue<int> q1;
    int i=1;
    while(i<=n_1){
        if(indegree[i] == 0){
            q1.push(i);
        }
        i++;
    }
    vector<int> topological_order;
    while(!q1.empty()){
        int parent = q1.front();
        q1.pop();
        topological_order.push_back(parent);
        for(auto child : adj_mat[parent]){
            indegree[child]--;
            if(indegree[child] == 0){
                q1.push(child);
            }

        }

    }
    if(topological_order.size() != n_1){
        cout << -1 << endl;
    }
    else{
        for(auto c : topological_order){
            cout << c << endl;
        }
    }
    return 0;
}
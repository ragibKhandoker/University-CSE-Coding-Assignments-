#include <bits/stdc++.h>
using namespace std;

#define MAX_NODES 200005
vector<int> graph_2[MAX_NODES];
int node_color2[MAX_NODES];
int bfs_traverse(int s){
    queue<int> q_1;
    q_1.push(s);
    node_color2[s] = 1;
    int c_1 = 1;
    int c_2 = 0;
    while(!q_1.empty()){
        int par = q_1.front();
        q_1.pop();
        for(auto child1 : graph_2[par]){
            if(node_color2[child1] == 0){
                node_color2[child1] = 3 - node_color2[par];
                if(node_color2[child1] == 1){
                    c_1++;
                }
                else{
                    c_2++;
                }
                q_1.push(child1);
            }
        }
    }
    return max(c_1,c_2);

}

int main(){
    freopen("input6.txt","r",stdin);
    freopen("output6.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n_1,e_1;
    cin >> n_1 >> e_1;
    if(!cin){
        return false;
    }
    while(e_1--){
        int a_1,b_1;
        cin >> a_1 >> b_1;
        graph_2[a_1].push_back(b_1);
        graph_2[b_1].push_back(a_1);

    }
    int r = 0;
    int p1=1;
    while(p1<=n_1){
        if(node_color2[p1] == 0){
            r += bfs_traverse(p1);
        }
        p1++;
    }
    cout << r << endl;

    return 0;
}
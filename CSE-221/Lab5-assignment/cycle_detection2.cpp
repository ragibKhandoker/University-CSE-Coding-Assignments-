#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES = 200005;
vector<int> adj_list[MAX_NODES];
vector<bool> visited(MAX_NODES,false);
vector<bool> re_stack(MAX_NODES,false);
bool dfs_cycle(int start){
    visited[start] = true;
    re_stack[start] = true;
    for(auto c : adj_list[start]){
        if(!visited[c]){
            if(dfs_cycle(c)){
                return true;
            }
        }
        else if(re_stack[c]){
            return true;
        }
    }
    re_stack[start] = false;
    return false;


}
int main(){
    freopen("input5.txt","r",stdin);
    freopen("output5.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    if(!cin){
        return false;
    }
    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);

    }
    for(int j=1; j<=N; j++){
        if(!visited[j]){
            if(dfs_cycle(j)){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;


    return 0;
}
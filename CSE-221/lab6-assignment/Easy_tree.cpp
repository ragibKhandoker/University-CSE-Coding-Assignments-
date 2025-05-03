#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<int> adj_list[MAX_NODES];
int subtree_size[MAX_NODES];
void dfs_traverse(int root,int parent){
    subtree_size[root] = true;
    for(auto child : adj_list[root]){
        if(child != parent){
            dfs_traverse(child,root);
            subtree_size[root] += subtree_size[child];
        }
    }
}
int main(){
    freopen("input4.txt","r",stdin);
    freopen("output4.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,R;
    cin >> N >> R;
    if(!cin){
        return false;
    }
    for(int i=0;i<N-1; i++){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    dfs_traverse(R,-1);
    int T;
    cin >> T;
    while(T--){
        int s;
        cin >> s;
        cout << subtree_size[s] << endl;

    }

    return 0;
}
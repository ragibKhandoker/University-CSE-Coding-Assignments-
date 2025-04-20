#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES = 200005;
vector<int> adj_1[MAX_NODES];
int dis[MAX_NODES];
int par[MAX_NODES];
bool vis[MAX_NODES];

void bfs_traversal(int s1_1,int n1_1){
    int u1=1;
    while(u1<=n1_1){
        dis[u1] = -1;
        par[u1] = -1;
        vis[u1] = false;
        u1++;
    }
    queue<int> q1_1;
    dis[s1_1] = 0;
    vis[s1_1] = true;
    q1_1.push(s1_1);
    while(!q1_1.empty()){
        int u1_1 = q1_1.front();
        q1_1.pop();
        for(auto k1 : adj_1[u1_1]){
            if(!vis[k1]){
                vis[k1] = true;
                dis[k1] = dis[u1_1] + 1;
                par[k1] = u1_1;
                q1_1.push(k1);
            }
        }

    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n1_1, e1_1, s1_2, d1_2;
    cin >> n1_1 >> e1_1 >> s1_2 >> d1_2;
    if (!cin) {
        return 0;
    }

    for (int z_1 = 0; z_1 < e1_1; z_1++) {
        int a_1, b_1;
        cin >> a_1 >> b_1;
        adj_1[a_1].push_back(b_1);
        adj_1[b_1].push_back(a_1);
    }

    for (int j_1 = 1; j_1 <= n1_1; j_1++) {
        sort(adj_1[j_1].begin(), adj_1[j_1].end());
    }

    bfs_traversal(s1_2, n1_1);

    if (dis[d1_2] == -1) {
        cout << -1 << endl;
    } else {
        cout << dis[d1_2] << endl;
        vector<int> p1_1;
        int t_1 = d1_2;
        while (t_1 != -1) {
            p1_1.push_back(t_1);
            t_1 = par[t_1];
        }
        reverse(p1_1.begin(), p1_1.end());
        for (auto c_1 : p1_1) {
            cout << c_1 << " ";
        }
        cout << endl;
    }

    return 0;
}
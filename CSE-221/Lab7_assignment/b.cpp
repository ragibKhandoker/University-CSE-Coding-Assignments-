#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
#define INF 1e18

vector<int> adj_list[MAX_NODES];
long long node_weight[MAX_NODES];
long long dist[MAX_NODES];

void dijkstra(int start, int N) {
    for(int i = 1; i <= N; i++) {
        dist[i] = INF;
    }
    dist[start] = node_weight[start];

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({dist[start], start});

    while(!pq.empty()) {
        long long cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(cost > dist[u]) continue;

        for(int v : adj_list[u]) {
            long long new_cost = cost + node_weight[v];
            if(new_cost < dist[v]) {
                dist[v] = new_cost;
                pq.push({new_cost, v});
            }
        }
    }
}

int main() {
    freopen("input10.txt", "r", stdin);
    freopen("output10.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, S, D;
    cin >> N >> M >> S >> D;

    for(int i = 1; i <= N; i++) {
        cin >> node_weight[i];
    }

    for(int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    dijkstra(S, N);

    if(dist[D] == INF) {
        cout << -1 << endl;
    } else {
        cout << dist[D] << endl;
    }

    return 0;
}

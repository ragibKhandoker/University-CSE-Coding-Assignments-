#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
#define INF 1e18
vector<int> adj_list[MAX_NODES];
long long node_w[MAX_NODES];
long long dis[MAX_NODES];
void dijkstra_algorithm(int src,int p1){
    int y=1;
    while(y<=p1){
        dis[y] = INF;
        y++;
    }
    dis[src] = node_w[src];
    priority_queue<pair<long long,int>,vector<pair<long long int,int>>,greater<pair<int,int>>> pq_1;
    pq_1.push({dis[src],src});
    while(!pq_1.empty()){
        int p_node = pq_1.top().second;
        long long d = pq_1.top().first;
        pq_1.pop();
        if(d > dis[p_node]){
            continue;
        }
        for(auto c : adj_list[p_node]){
            long long new_dis = d + node_w[c];
            if(new_dis < dis[c]){
                dis[c] = new_dis;
                pq_1.push({new_dis,c});
            }
        }
    }
}
int main(){
    freopen("input7.txt","r",stdin);
    freopen("output7.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M,S,D;
    cin >> N >> M >> S >> D;
    if(!cin){
        return false;
    }
    for(int m1=1; m1<=N; m1++){
        cin >> node_w[m1];
    }
    for(int j1=0; j1<M; j1++){
        int a1,b1;
        cin >> a1 >> b1;
        adj_list[a1].push_back(b1);
    }
    dijkstra_algorithm(S,N);
    if(dis[D] == INF){
        cout << -1 << endl;
    }
    else{
        cout << dis[D] << endl;
    }


    return 0;
}

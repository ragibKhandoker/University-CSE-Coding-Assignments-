#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<pair<int,int>> adj_list[MAX_NODES];
int d[MAX_NODES];
int S_d[MAX_NODES];
int T_d[MAX_NODES];
void dijkstra(int s){
    for(int i=0; i<MAX_NODES; i++){
        d[i] = INT_MAX;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq_1;
    d[s] = 0;
    pq_1.push({0,s});
    while(!pq_1.empty()){
        pair<int,int> t = pq_1.top();
        pq_1.pop();
        int p = t.second;
        int p_dis = t.first;
        if(p_dis > d[p]){
            continue;
        }
        for(auto c1 : adj_list[p]){
            int c2 = c1.first;
            int c2_dis = c1.second;
            if(d[c2] > d[p] + c2_dis){
                d[c2] = d[p] + c2_dis;
                pq_1.push({d[c2],c2});
            }
        }
    }



}
int main(){
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M,S,T;
    cin >> N >> M >> S >> T;
    if(!cin){
        return false;
    }
    for(int i=0; i<M; i++){
        int a1,b1,c1;
        cin >> a1 >> b1 >> c1;
        adj_list[a1].push_back({b1,c1});
    }
    dijkstra(S);
    int u1=1;
    while(u1<=N){
        S_d[u1] = d[u1];
        u1++;
    }
    dijkstra(T);
    int v1=1;
    for(int v1=1; v1<=N; v1++){
        T_d[v1] = d[v1];
    }
    int m_cost = INT_MAX;
    int meet_node = -1;
    for(int j=1; j<=N; j++){
        if(S_d[j] != INT_MAX && T_d[j] != INT_MAX){
            int max_cost = max(S_d[j],T_d[j]);
            if(max_cost < m_cost){
                m_cost = max_cost;
                meet_node = j;
            }
            else if(max_cost == m_cost && j < meet_node){
                meet_node = j;
            }
        }
    }
    if(meet_node == -1){
        cout << -1 << endl;
    }
    else
    {
        cout << m_cost << " " << meet_node << endl;
    }

    return 0;
}
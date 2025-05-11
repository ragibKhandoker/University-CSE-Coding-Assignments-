#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<pair<int,int>> adj_list[MAX_NODES];
int d[MAX_NODES][2];
void dijkstra_algorithm(int s){
    int j5=0;
    while(j5<=MAX_NODES){
        d[j5][0] = INT_MAX;
        d[j5][1] = INT_MAX;
        j5++;
    }
    d[s][0]=0;
    d[s][1]=0;
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq_1;
    pq_1.push({0,s,-1});
    while(!pq_1.empty()){
        int p_edge = get<0>(pq_1.top());
        int p_node = get<1>(pq_1.top());
        int p_par = get<2>(pq_1.top());
        pq_1.pop();
        for(auto c : adj_list[p_node]){
            int c_node = c.first;
            int c_edge = c.second;
            int up_c_edge = c_edge % 2;
            if(p_par != -1 && p_par == up_c_edge){
                continue;
            };
            if(p_edge + c_edge < d[c_node][up_c_edge]){
                d[c_node][up_c_edge] = p_edge + c_edge;
                pq_1.push({d[c_node][up_c_edge],c_node,up_c_edge});
            }
        }
    }

}
int main(){
    freopen("input6.txt","r",stdin);
    freopen("output6.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    if(!cin){
        return false;
    }
    vector<int> A_1(M),A_2(M),A_3(M);
    for(int i1=0; i1<M; i1++){
        cin >> A_1[i1];
    }
    for(int j1=0; j1<M; j1++){
        cin >> A_2[j1];
    }
    for(int k1=0; k1<M; k1++){
        cin >> A_3[k1];
    }
    for(int i2=0; i2<M; i2++){
        adj_list[A_1[i2]].push_back({A_2[i2],A_3[i2]});
    }
    dijkstra_algorithm(1);
    int sol = min(d[N][0],d[N][1]);
    if(sol == INT_MAX){
        cout << -1 << endl;
    }
    else
    {
        cout << sol << endl;
    }
    return 0;
}
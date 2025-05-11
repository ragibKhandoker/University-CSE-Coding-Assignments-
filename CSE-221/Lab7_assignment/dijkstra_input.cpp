#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<pair<int, int>> adj_list[MAX_NODES];
long long s_dis[MAX_NODES];
long long sec1_dis[MAX_NODES];
void dijkstra_algo(int src1){
    for(int j=0; j<MAX_NODES; j++){
        s_dis[j] = LLONG_MAX;
        sec1_dis[j] = LLONG_MAX;
    }
    s_dis[src1] = 0;
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long ,int>>> pq_1;
    pq_1.push({0,src1});
    while(!pq_1.empty()){
        long long c1_d = pq_1.top().first;
        int c1_n = pq_1.top().second;
        pq_1.pop();
        if(c1_d > sec1_dis[c1_n]){
            continue;
        }
        for(auto c : adj_list[c1_n]){
            int next_n1 = c.first;
            int edge_w1 = c.second;
            long long new_d = c1_d + edge_w1;
            if(new_d < s_dis[next_n1]){
                sec1_dis[next_n1] = s_dis[next_n1];
                s_dis[next_n1] = new_d;
                pq_1.push({new_d,next_n1});
            }
            else if( new_d > s_dis[next_n1] && new_d < sec1_dis[next_n1])
            {
                sec1_dis[next_n1] = new_d;
                pq_1.push({new_d,next_n1});
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
    int j_1=0;
    while(j_1<M){
        int a_1,b_1,c_1;
        cin >> a_1 >> b_1 >> c_1;
        adj_list[a_1].push_back({b_1,c_1});
        adj_list[b_1].push_back({a_1,c_1});
        j_1++;

    }
    dijkstra_algo(S);
    if(sec1_dis[D] == LLONG_MAX){
        cout << -1 << endl;
    }
    else{
        cout << sec1_dis[D] << endl;
    }


    return 0;
}

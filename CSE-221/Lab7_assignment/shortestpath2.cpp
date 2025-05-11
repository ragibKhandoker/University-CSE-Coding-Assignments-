#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<pair<int,int>> adj_list[MAX_NODES];
int d[MAX_NODES];
int p[MAX_NODES];
void dijkstra(int src){
    for(int i=0; i<MAX_NODES; i++){
        d[i] = INT_MAX;
        p[i] = -1;
    }
    d[src] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq_1;
    pq_1.push({0,src});
    while(!pq_1.empty()){
        int p_node = pq_1.top().second;
        int p_dis = pq_1.top().first;
        pq_1.pop();
        if(d[p_node] < p_dis){
            continue;
        }
        for(auto c : adj_list[p_node]){
            int c_node = c.first;
            int c_dis = c.second;
            if(d[p_node] + c_dis < d[c_node]){
                d[c_node] = d[p_node] + c_dis;
                p[c_node] = p_node;
                pq_1.push({d[c_node],c_node});
            }
        }
    }

}
int main(){
    freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M,S,D;
    cin >> N >> M >> S >> D;
    if(!cin){
        return false;
    }
    vector<int> arr_1(M),arr_2(M),arr_3(M);
    for(int i1=0; i1<M; i1++){
        cin >> arr_1[i1];
    }
    for(int j1=0; j1<M; j1++){
        cin >> arr_2[j1];
    }
    for(int k1=0; k1<M; k1++){
        cin >> arr_3[k1];
    }
    for(int m1=0; m1<M; m1++){
        adj_list[arr_1[m1]].push_back({arr_2[m1],arr_3[m1]});
    }
    dijkstra(S);
    if(d[D] == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << d[D] << endl;
        vector<int> pathway;
        int t = D;
        while(t != -1){
            pathway.push_back(t);
            t = p[t];
        }
        reverse(pathway.begin(),pathway.end());
        for(int h1=0; h1<pathway.size(); h1++){
            cout << pathway[h1] << " ";
        }
        cout << endl;
    }
    return 0;
}
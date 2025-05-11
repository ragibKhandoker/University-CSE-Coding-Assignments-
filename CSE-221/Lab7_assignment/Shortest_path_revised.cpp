#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<pair<int,int>> adj_list[MAX_NODES];
int d1[MAX_NODES][2];
void dijkstra_algo(int s1){
    int k1=0;
    while(k1<MAX_NODES){
        d1[k1][0] = INT_MAX;
        d1[k1][1] = INT_MAX;
        k1++;
    }
    d1[s1][0] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq_1;
    pq_1.push({0,s1});
    while(!pq_1.empty()){
        int p_n1 = pq_1.top().second;
        int p_e1 = pq_1.top().first;
        pq_1.pop();
        if(p_e1 > d1[p_n1][1]){
            continue;
        }
        for(auto c1 : adj_list[p_n1]){
            int c_n1 = c1.first;
            int c_d1 = c1.second;
            if(d1[p_n1][0] + c_d1 < d1[c_n1][0]){
                d1[c_n1][1] = d1[c_n1][0];
                d1[c_n1][0] = d1[p_n1][0] + c_d1;
                pq_1.push({d1[c_n1][0],c_n1});
            }
            else if(d1[p_n1][0] + c_d1 > d1[c_n1][0] && d1[p_n1][0] + c_d1 < d1[c_n1][1]){
                d1[c_n1][1] = d1[p_n1][0] + c_d1;
                pq_1.push({d1[c_n1][1], c_n1});
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
    int j=0;
    while(j<M){
        int a_1,b_1,c_1;
        cin >> a_1 >> b_1 >> c_1;
        adj_list[a_1].push_back({b_1,c_1});
        adj_list[b_1].push_back({a_1,c_1});
        j++;
    }
    dijkstra_algo(S);
    if(S==D && d1[D][1] == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << d1[D][1] << endl;
    }


    return 0;
}
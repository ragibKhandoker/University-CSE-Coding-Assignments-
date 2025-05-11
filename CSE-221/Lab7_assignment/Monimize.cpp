#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200005
vector<pair<int,int>> adj_list[MAX_NODES];
int d1[MAX_NODES][2];
long long dg[MAX_NODES];
void dijkstra_algo(int source){
    int k1=1;
    while(k1<=MAX_NODES){
        dg[k1] = LLONG_MAX;
        k1++;
    }
    dg[source] = 0;
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long ,int>>> pq_1;
    pq_1.push({0,source});
    while(!pq_1.empty()){
        long long d1 = pq_1.top().first;
        int n = pq_1.top().second;
        pq_1.pop();
        if(dg[n] > d1){
            continue;
        }
        for(auto c1 : adj_list[n]){
            int nx = c1.first;
            long long eg_wt = c1.second;
            long long new_d = max(dg[n], eg_wt);
            if(new_d < dg[nx]){
                dg[nx] = new_d;
                pq_1.push({dg[nx],nx});
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
    int N,M;
    cin >> N >> M;
    if(!cin){
        return false;
    }
    int j=0;
    while(j<M){
        int a_1,b_1;
        long long c_1;
        cin >> a_1 >> b_1 >> c_1;
        adj_list[a_1].push_back({b_1,c_1});
        adj_list[b_1].push_back({a_1,c_1});
        j++;
    }
    dijkstra_algo(1);
    int i=1;
    while(i<=N){
        if(dg[i] == LLONG_MAX){
            cout << -1 << endl;
        }
        else{
            cout << dg[i] << " ";
        }
        i++;
    }
    cout << endl;


    return 0;
}
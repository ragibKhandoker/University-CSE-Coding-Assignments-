#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 200003
vector<tuple<int,int,int>> e_l2;
vector<tuple<int,int,int>> m_e_l2;
vector<tuple<int,int,int>> mst_e_l2;
vector<pair<int,int>> t_s2[MAX_NODES];
unordered_map<long long, int> max_e2;
vector<tuple<int,int,int>> adj_l2[MAX_NODES];
int p1_1[MAX_NODES];
int r1_1[MAX_NODES];
bool vist_2[MAX_NODES];

int find1_way(int y1_1c){
    if(p1_1[y1_1c] != y1_1c){
        p1_1[y1_1c] = find1_way(p1_1[y1_1c]);
    }
    return p1_1[y1_1c];
}

bool union_1(int c1_1,int c1_2){
    int q1_1 = find1_way(c1_1);
    int q1_2 = find1_way(c1_2);
    if(q1_1 == q1_2){
        return false;
    }
    if(r1_1[q1_1] < r1_1[q1_2]){
        int temp_1 = q1_1;
        q1_1 = q1_2;
        q1_2 = temp_1;
    }
    p1_1[q1_2] = q1_1;
    if(r1_1[q1_1] == r1_1[q1_2]){
        r1_1[q1_1]++;
    }
    return true;
}

void dfs_path_tra(int src_12, int u_12, int par52, int m_so_far32){
    max_e2[1LL * src_12 * MAX_NODES + u_12] = m_so_far32;
    for(auto c1_x : t_s2[u_12]){
        int v_1 = c1_x.first;
        int w_1 = c1_x.second;
        if(v_1 != par52){
            dfs_path_tra(src_12, v_1, u_12, max(m_so_far32, w_1));
        }
    }
}

int main(){
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n_1,e_1;
    cin >> n_1 >> e_1;
    if(!cin){
        return false;
    };
    for(int m =1; m<=n_1; m++){
        p1_1[m] = m;
        r1_1[m] = 0;
    }
    for(int j_7=0; j_7<e_1; j_7++ ){
        int a9, b9, c9;
        cin >> a9 >> b9 >> c9;
        adj_l2[a9].push_back(make_tuple(a9, b9, c9));
        adj_l2[b9].push_back(make_tuple(b9, a9, c9));
        e_l2.push_back(make_tuple(c9, a9, b9));
       }

    sort(e_l2.begin(), e_l2.end());

    long long int count = 0;
    for(auto g : e_l2){
        int w4 = get<0>(g);
        int u4 = get<1>(g);
        int v4 = get<2>(g);
        if(union_1(u4, v4)){
            count += w4;
            mst_e_l2.push_back(g);
            t_s2[u4].push_back({v4, w4});
            t_s2[v4].push_back({u4, w4});
        }
    }

    if(static_cast<int>(mst_e_l2.size()) != n_1-1){
        cout << -1 << endl;
        return 0;
    }
    for(int j1=0; j1 <= n_1; j1++){
        dfs_path_tra(j1, j1, -1, 0);
        j1++;
    }

    long long int s_best = INT_MAX;

    for(auto t_1 : e_l2){
        int w_8 = get<0>(t_1);
        int u_8 = get<1>(t_1);
        int v_8 = get<2>(t_1);

        bool flg_1 = false;
        for(auto f4 : mst_e_l2){
            if((get<1>(f4) == u_8 && get<2>(f4) == v_8) || (get<1>(f4) == v_8 && get<2>(f4) == u_8)){
                flg_1 = true;
                break;
            }
        }

        if(!flg_1){
            int max_w = max_e2[1LL * u_8 * MAX_NODES + v_8];
            if(w_8 > max_w){
                s_best = min(s_best, count - max_w + w_8);
            }
        }
    }

    if(s_best == LLONG_MAX){
        cout << -1 << endl;
    } else {
        cout << s_best << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 2005
vector<pair<int,int>> directions = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1},
{1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int grid[MAX_NODES][MAX_NODES];
int main(){
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n_1;
    cin >> n_1;
    if(!cin){
        return false;
    }
    int s_i,s_j,d_i,d_j;
    cin >> s_i >> s_j >> d_i >> d_j;
    if(!cin){
        return false;
    }
    for(int i=1;i<=n_1;i++){
        for(int j=1; j<=n_1;j++){
            grid[i][j] = -1;
        }
    }
    queue<pair<int,int>> q_1;
    q_1.push({s_i,s_j});
    grid[s_i][s_j] = 0;
    while(!q_1.empty()){
        pair<int,int> parent = q_1.front();
        q_1.pop();
        int c_1 = parent.first;
        int c_2 = parent.second;
        for(auto d : directions){
            int f_1 = c_1 + d.first;
            int f_2 = c_2 + d.second;
            if(f_1 >= 1 && f_1 <= n_1 && f_2 >= 1 && f_2 <= n_1 && grid[f_1][f_2] == -1){
                grid[f_1][f_2] = grid[c_1][c_2] + 1;
                q_1.push({f_1,f_2});
            }
        }
    }
    cout << grid[d_i][d_j] << endl;


    return 0;
}
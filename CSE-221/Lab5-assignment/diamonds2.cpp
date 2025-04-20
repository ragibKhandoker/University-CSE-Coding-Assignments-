#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> directions = {{-1,0},{0,-1},{1,0},{0,1}};
void dfs(int si,int sj,int &diamonds){
    visited[si][sj] = true;
    if(grid[si][sj] == 'D'){
        diamonds++;
    }
    for(auto c : directions){
        int x1 = si + c.first;
        int x2 = sj + c.second;
        if(x1 >= 0 && x1 < 1005 && x2 >= 0 && x2 < 1005 && !visited[x1][x2] && (grid[x1][x2] == '.' || grid[x1][x2] == 'D')){
            dfs(x1,x2,diamonds);
        }
    }
}
int main(){
    freopen("input7.txt","r",stdin);
    freopen("output7.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r1,c1;
    cin >> r1 >> c1;
    if(!cin){
        return 0;
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin >> grid[i][j];
        }
    }
    int curr_c = 0;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            if(!visited[i][j] && (grid[i][j] == '.' || grid[i][j] == 'D')){
                int c1 = 0;
                dfs(i, j, c1);
                curr_c = max(curr_c, c1);
            }
        }
    }
    cout << curr_c << endl;
    return 0;
}
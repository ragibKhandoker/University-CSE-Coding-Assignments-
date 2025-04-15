#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("intput8.txt","r",stdin);
    freopen("output8.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N,u,v;
    cin >> N >> u >> v;
    if(!cin){
        return false;
    }
    int d_x[] = {-1,-1,-1,0,0,1,1,1};
    int d_y[] = {-1,0,1,-1,1,-1,0,1};
    vector<pair<int,int>> moves_round;
    int j = 0;
    while(j<8){
        int x = u + d_x[j];
        int y = v + d_y[j];
        if(x >= 1 && x <= N && y >= 1 && y <= N){
            moves_round.emplace_back(x,y);
        }
        j++;
    }
    sort(moves_round.begin(),moves_round.end());
    cout << moves_round.size() << endl;
    for(auto a : moves_round){
        cout << a.first << " " << a.second << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES = 200005;
vector<int> adj_list[MAX_NODES];
vector<bool> visited(MAX_NODES,false);
int main(){
    freopen("input8.txt","r",stdin);
    freopen("output8.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,e,s,d,k;
    cin >> n >> e >> s >> d >> k;
    if(!cin){
        return 0;
    }
    for(int i=0; i<e; i++){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    for(int c1=0; c1<n; c1++){
        for(int c2=0; c2<n; c2++){
            cin >> adj_list[c1][c2];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<adj_list[i].size(); j++){
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
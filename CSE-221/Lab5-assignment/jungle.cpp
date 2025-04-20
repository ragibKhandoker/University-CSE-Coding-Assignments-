#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES = 200005;
vector<int> adj_1[MAX_NODES];
int d[MAX_NODES];
int p[MAX_NODES];
bool v[MAX_NODES];
void bfs_traversal(int s,int n){
    for(int j=1; j<=n; j++){
        d[j] = -1;
        p[j] = -1;
        v[j] = false;
    }
    queue<int> q1;
    q1.push(s);
    d[s] = 0;
    v[s] = true;
    while(!q1.empty()){
        int parent = q1.front();
        q1.pop();
        for(auto z : adj_1[parent]){
            if(!v[z]){
                v[z] = true;
                d[z] = d[parent] + 1;
                p[z] = parent;
                q1.push(z);
            }
        }
    }
}
vector<int> get_path1(int destination){
    vector<int> path1;
    while(destination != -1){
        path1.push_back(destination);
        destination = p[destination];
    }
    reverse(path1.begin(),path1.end());
    return path1;
}
int main(){
    freopen("input10.txt","r",stdin);
    freopen("output10.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n1,e1,s1,d1,k1;
    cin >> n1 >> e1 >> s1 >> d1 >> k1;
    if(!cin){
        return false;
    }
    int j=0;
    while(j<e1){
        int r1,r2;
        cin >> r1 >> r2;
        adj_1[r1].push_back(r2);
        j++;

    }
    bfs_traversal(s1,d1);
    if(d[k1] == -1){
        cout << -1 << endl;
        return 0;
    }
    vector<int> path_2 = get_path1(d1);
    path_2.pop_back();
    for(auto z : path_2){
        path_2.push_back(z);
    }
    cout << path_2.size()-1 << endl;
    for(auto a : path_2){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
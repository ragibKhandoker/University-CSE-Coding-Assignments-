#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input7.txt","r",stdin);
    freopen("output7.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    if(!cin){
        return false;
    }
    vector<int> m(M),n(M);
    vector<int> indegree(N+1,0),outdegree(N+1,0);
    for(int j=0; j<M; j++){
        cin >> m[j];
    }
    for(int j=0; j<M;j++){
        cin >> n[j];
    }
    for(int u=0; u<M; u++){
        outdegree[m[u]]++;
        indegree[n[u]]++;
    }
    for(int k=1; k<=N; k++){
        int x = (indegree[k] - outdegree[k]);
        cout << x << endl;
    }
    cout << endl;
    return 0;
}
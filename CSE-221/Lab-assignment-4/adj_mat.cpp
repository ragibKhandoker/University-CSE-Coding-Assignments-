#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    if(!cin){
        return false;
    }
    int adj_mat[105][105];
    for(int j1=0; j1<105; j1++){
        for(int j2=0; j1<105;j1++){
            adj_mat[j1][j2] = 0;
        }
    }
    for(int r1=0; r1<M; r1++){
        int t1,t2,t3;
        cin >> t1 >> t2 >> t3;
        adj_mat[t1][t2] = t3;
    }
    for(int f1=1; f1 <= N; f1++){
        for(int f2=1; f2 <= N; f2++){
            cout << adj_mat[f1][f2] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input4.txt","r",stdin);
    freopen("output4.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    if(!cin){
        return false;
    }
    vector<int> m1(M),n1(M),O1(M);
    for(int d_1=0; d_1<M; d_1++){
        cin >> m1[d_1];
    }
    for(int d_2=0; d_2<M;d_2++){
        cin >> n1[d_2];
    }
    for(int d_3=0; d_3<M; d_3++){
        cin >> O1[d_3];
    }
    vector<pair<int,int>> adj_list[105];
    for(int t1=0; t1<M; t1++){
        adj_list[m1[t1]].push_back({n1[t1],O1[t1]});
    }
    for(int a1=1; a1<=N; a1++){
        cout << a1 << ": ";
        for(auto q1 : adj_list[a1]){
            cout << "(" << q1.first << "," << q1.second << ")";
        }
        cout << endl;
    }

    return 0;
}

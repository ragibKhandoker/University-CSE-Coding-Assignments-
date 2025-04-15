#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input6.txt","r",stdin);
    freopen("output6.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N,M;
    cin >> N >> M;
    if(!cin){
        return false;
    }
    vector<int> degree_seven(N+1,0);
    for(int j1=0; j1<M; j1++){
        int r1=0;
        cin >> r1;
        degree_seven[r1]++;
    }
    for(int k1=0; k1<M; k1++){
        int t1=0;
        cin >> t1;
        degree_seven[t1]++;
    }
    int odd_count1=0;
    for(int q1=1; q1<=N; q1++){
        if(degree_seven[q1] % 2 != 0){
            odd_count1++;
        }
    }
    if(odd_count1 == 0 || odd_count1 == 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
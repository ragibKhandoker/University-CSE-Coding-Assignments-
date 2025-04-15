#include <bits/stdc++.h>
using namespace std;
int gcd(int z_1,int z_2){
    if(z_2 == 0){
        return z_1;
    }
    return gcd(z_2,z_1% z_2);
}
int main(){
    freopen("input10.txt","r",stdin);
    freopen("output10.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N,Q;
    cin >> N >> Q;
    if(!cin){
        return false;
    }
    vector<vector<int>> adjacent_differ(N+1);
    int i1=1;
    while(i1<=N){
        int j1=1;
        while(j1<=N){
            if(i1 != j1){
                if(gcd(i1,j1) == 1){
                    adjacent_differ[i1].push_back(j1);
                }
            }
            j1++;
        }
        sort(adjacent_differ[i1].begin(),adjacent_differ[i1].end());
        i1++;
    }
    while(Q--){
        int r_1,r_2;
        cin >> r_1 >> r_2;
        if(r_2 <= adjacent_differ[r_1].size()){
            cout << adjacent_differ[r_1][r_2-1] << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}
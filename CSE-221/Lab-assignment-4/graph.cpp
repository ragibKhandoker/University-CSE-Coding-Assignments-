#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input5.txt","r",stdin);
    freopen("output5.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n1;
    cin >> n1;
    if(!cin){
        return false;
    }
    int matrix[105][105];
    for(int i=0;i<105;i++){
        for(int j=0;j<105;j++){
            matrix[i][j] = 0;
        }
    }
    for(int e=0; e<n1; e++){
        int s;
        cin >> s;
        for(int z=0; z<s; z++){
            int f;
            cin >> f;
            matrix[e][f] = 1;
        }
    }
    for(int c1=0; c1 < n1;c1++){
        for(int c2=0; c2< n1; c2++){
            cout << matrix[c1][c2] << " ";
        }
        cout << endl;
    }
    return 0;
}
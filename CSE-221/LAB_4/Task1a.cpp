#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int N;
    // cout << "Enter number of vertices: " << endl;
    cin >> N;
    int M;
    // cout << "Enter total number of edges: " << endl;
    cin >> M;
    // vector<type> ArrName(size,default value);
    // this is default struture of vector dinamic array
    vector<vector<int>> Mat(N+1,vector<int>(N+1,0));
    for(int i=0; i<M; i++){
        int c1;
        // cout << "Enter 1st node value: " << endl;
        cin >> c1;
        int c2;
        // cout << "Enter 2nd node value: " << endl;
        cin >> c2;
        int c3;
        // cout << "Enter interconnected edge number: " << endl;
        cin >> c3;
        Mat[c1][c2] = c3;

    }
    // cout << "The 2D adjacency matrix is: " << endl;
    for(int j=0; j<=N; j++){
        for(int k=0; k<=N; k++){
            cout << Mat[j][k] << " ";
        }
        cout << endl;
    }
    return 0;


}
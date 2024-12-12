#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout << "Enter number of vertices: " << endl;
    cin >> N;
    int M;
    cout << "Enter total number of edges: " << endl;
    cin >> M;
    vector<list<pair<int,int>>> adjList(N+1);
    for(int i=0; i<M; i++){
        int c1;
        cout << "Enter 1st Node value: " << endl;
        cin >> c1;
        int c2;
        cout << "Enter 2nd Node value: " << endl;
        cin >> c2;
        int c3;
        cout << "Enter interconnected edges: " << endl;
        cin >> c3;
        adjList[c1].push_back({c2,c3});
    }
    for(int j=0; j<=N; j++){
        cout << j << ":";
        for(auto x : adjList[j]){
            cout << "(" << x.first << "," << x.second << ")";
        }
        if(adjList[j].empty()){
            cout << " ";
        }
        cout << endl;

    }
    return 0;

}
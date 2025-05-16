#include <bits/stdc++.h>
using namespace std;
#define MAX 200005;
int p1_of[300005];
int s1_set[300005];
int r_set[300005];
int find_p1(int y){
    if(p1_of[y] == y){
        return y;
    }
    return p1_of[y] = find_p1(p1_of[y]);
}
bool unionSets(int a1,int a2){
    int a = find_p1(a1);
    int b = find_p1(a2);
    if(a == b){
        return false;
    }
    if(r_set[a] < r_set[b]){
        int t1 = a;
        a = b;
        b = t1;
    }
    p1_of[b] = a;
    if(r_set[a] == r_set[b]){
        r_set[a]++;
    }
    return true;
}
int main(){
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,e;
    cin >> n >> e;
    if(!cin){
        return false;
    }
    vector<tuple<int,int,int>> edges_1(e);
    long long int total = 0;
    for(int i=0; i<e; i++){
        int a,b,c;
        cin >> a >> b >> c;
        edges_1.push_back({a,b,c});
        total++;
    }
    sort(edges_1.begin(),edges_1.end());
    int i=1;
    while(i<=n){
        p1_of[i] = i;
        s1_set[i] += 1;
        i++;
    }
    for(int i=0; i<e; i++){
        int f1,f2;
        cin >> f1 >> f2;
        cout << unionSets(f1,f2) << endl;
    }

    return 0;
}

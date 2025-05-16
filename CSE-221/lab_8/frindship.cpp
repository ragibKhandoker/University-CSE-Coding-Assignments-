#include <bits/stdc++.h>
using namespace std;
#define MAX_NODES 300005
int p1_of[MAX_NODES];
int s1_of[MAX_NODES];
int find_parent1(int y){
    if(p1_of[y] != y){
        p1_of[y] = find_parent1(p1_of[y]);
    }
    return p1_of[y];
}
int unionSets(int z1,int z2){
    int p1_1 = find_parent1(z1);
    int p1_2 = find_parent1(z2);
    if(p1_1 == p1_2){
        return s1_of[p1_1];
    }
    if(s1_of[p1_1] < s1_of[p1_2]){
        int t1 = p1_1;
        p1_1 = p1_2;
        p1_2 = t1;
    }
    p1_of[p1_2] = p1_1;
    s1_of[p1_1] += s1_of[p1_2];
    return s1_of[p1_1];
}
int main(){
    freopen("friendship.in", "r", stdin);
    freopen("friendship.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c1_1,c1_2;
    cin >> c1_1 >> c1_2;
    if(!cin){
        return 0;
    }
    for(int k1=1;k1<=c1_1; k1++){
        p1_of[k1]=k1;
        s1_of[k1]=1;
        k1++;
    }
    int s1=0;
    while(c1_2--){
        int d1_1,d1_2;
        cin >> d1_1 >> d1_2;
        cout << unionSets(d1_1,d1_2) << endl;
        s1++;
    }
    return 0;
}
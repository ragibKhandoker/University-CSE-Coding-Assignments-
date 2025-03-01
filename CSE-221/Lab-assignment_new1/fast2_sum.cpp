#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input6.txt","r",stdin);
    freopen("output6.txt","w",stdout);
    int T;
    cin >> T;
    while(T--){
        long long c1;
        cin >> c1;
        long long total_summation = c1*(c1+1)/2;
        cout << total_summation << endl;
    }
    return 0;
}
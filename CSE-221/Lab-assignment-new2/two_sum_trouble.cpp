#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c1,c2;
    cin >> c1 >> c2;
    if(!cin){
        return false;
    }
    vector<int> array(c1);
    for(int i=0; i<c1; i++){
        cin >> array[i];
    }
    int x = 0;
    int y = array.size()-1;
    while(x < y){
        int addition = array[x] + array[y];
        if(addition == c2){
            cout << x+1 << " " << y+1 << endl;
            return 0;
        }
        else if(addition <c2){
            x++;
        }
        else{
            y--;
        }
    }
    cout << -1 << endl;
    return 0;
}
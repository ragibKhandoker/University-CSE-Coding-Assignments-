#include <bits/stdc++.h>
using namespace std;
int find_first_one(string &str){
    int left = 0;
    int right = str.size();
    while(left < right){
        int mid = left + (right-left)/2;
        if(str[mid] == '1'){
            right = mid;
        }else{
            left = mid +1;
        }
    }
    if(left < str.size() && str[left] == '1'){
        return left + 1;
    }
    else{
        return  -1;
    }
}
int main(){
    freopen("input7.txt","r",stdin);
    freopen("output7.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    if(!cin){
        return false;
    }
    while(q--){
        string s1;
        cin >> s1;
        int x = find_first_one(s1);
        cout << x << endl;
    }
    return 0;
}

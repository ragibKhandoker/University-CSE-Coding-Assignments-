#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input5.txt","r",stdin);
    freopen("output5.txt","w",stdout);
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> new_arr(arr.begin(),arr.begin()+k);
    reverse(new_arr.begin(),new_arr.end());
    for(int j=0; j<new_arr.size(); j++){
        cout << new_arr[j] << " ";
    }
    return 0;
}
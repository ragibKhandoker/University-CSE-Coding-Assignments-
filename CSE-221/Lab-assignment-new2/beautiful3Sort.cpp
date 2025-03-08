#include <bits/stdc++.h>
using namespace std;
vector<int> merge_arrays(vector<int> &arr_1,vector<int> &arr_2){
    int k=0;
    vector<int> arr_3(arr_1.size()+arr_2.size());
    int x=0;
    while(x<arr_1.size()){
        arr_3[k++] = arr_1[x++];
    }
    int y=0;
    while(y<arr_2.size()){
        arr_3[k++] = arr_2[y++];
    }
    sort(arr_3.begin(),arr_3.end());
    return arr_3;

}
int main(){
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p1;
    cin >> p1;
    if(!cin){
        return false;
    }
    vector<int> arr1(p1);
    for(int u=0; u<p1; u++){
        cin >> arr1[u];
    }
    // for(int i=0; i<p1; i++){
    //     cout << arr1[i] << " ";
    // }
    // cout << endl;
    int p2;
    cin >> p2;
    if(!cin){
        return false;
    }
    vector<int> arr2(p2);
    for(int j=0; j<p2;j++){
        cin >> arr2[j];
    }
    // for(int k=0; k<p2; k++){
    //     cout << arr2[k] << " ";
    // }
    // cout << endl;
    vector<int> arr3 = merge_arrays(arr1,arr2);
    for(int e=0; e<arr3.size(); e++){
        cout << arr3[e] << " ";
    }

    return 0;
}
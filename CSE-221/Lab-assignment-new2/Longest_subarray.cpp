#include <bits/stdc++.h>
using namespace std;
int longest_subarray(int n_1,int k_1, vector<int>&arr_1){
    int add_1 = 0;
    int max_length_1 = 0;
    int left_1 = 0;
    for(int right_1=0; right_1 < n_1; right_1++){
        add_1 += arr_1[right_1];
        while(add_1 > k_1){
            add_1 -= arr_1[left_1];
            left_1++;
        }
        max_length_1 = max(max_length_1,right_1-left_1+1);
    }
    return max_length_1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input4.txt","r",stdin);
    freopen("output4.txt","w",stdout);
    int c_1,c_2;
    cin >> c_1 >> c_2;
    if(!cin){
        return false;
    }
    vector<int> arr1(c_1);
    for(int v=0; v<c_1; v++){
        cin >> arr1[v];
    }
    // for(int v1=0; v1<c_1; v1++){
    //     cout << arr1[v1] << " ";
    // }
    cout << endl;
    int r1 = longest_subarray(c_1,c_2,arr1);
    cout << r1 << endl;

    return 0;
}
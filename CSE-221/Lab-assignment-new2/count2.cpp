#include <bits/stdc++.h>
using namespace std;
int lower_value_index(vector<int>& arr,int target_1){
    int left_1 = 0;
    int right_1 = arr.size();
    while(left_1 < right_1){
        int mid_1 = left_1 + (right_1-left_1) / 2;
        if(arr[mid_1] < target_1){
            left_1 = mid_1+1;
        }
        else{
            right_1 = mid_1;
        }
    }
    return left_1;
}
int upper_value_index(vector<int>& arr,int target_2){
    int left_2 = 0;
    int right_2 = arr.size();
    while(left_2 < right_2){
        int mid_2 = left_2 + (right_2 - left_2) / 2;
        if(arr[mid_2] <= target_2 ){
            left_2 = mid_2+1;
        }
        else{
            right_2 = mid_2;
        }
    }
    return left_2;
}
int count1(int left,int right,vector<int>&array){
    int left_index2 = lower_value_index(array,left);
    int right_index2 = upper_value_index(array,right);
    return right_index2-left_index2;
}
int main(){
    freopen("input5.txt","r",stdin);
    freopen("output5.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c1,c2;
    cin >> c1 >> c2;
    if(!cin){
        return false;
    }
    vector<int> arr1(c1);
    for(int i=0; i<c1; i++){
        cin >> arr1[i];
    }
    vector<pair<int,int>> arr2(c2);
    for(int h1=0; h1<c2; h1++){
        cin >> arr2[h1].first >> arr2[h1].second;
    }
    for(auto x : arr2){
       int j_1 = x.first;
       int j_2 = x.second;
       int result1 = count1(j_1,j_2,arr1);
       cout << result1 << endl;

    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &array){
    bool swap;
    for(int i=0; i<array.size()-1; i++){
        swap = false;
        for(int j=0; j<array.size()-1-i; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = true;
            }
        }
        if(swap == false){
            break;
        }
    }
};
void print_array(const vector<int> &array2){
    for(auto x : array2){
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    freopen("input8.txt","r",stdin);
    freopen("output8.txt","w",stdout);
    int c1;
    cin >> c1;
    vector<int> arr(c1);
    for(int i=0; i<c1; i++){
        cin >> arr[i];
    }
    bubble_sort(arr);
    print_array(arr);

    return 0;
}
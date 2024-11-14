// Always take input in sorted
// This code is in O(n) format
#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter array length: " << endl;
    cin >> c1;
    int arr1[c1];
    for(int i=0; i<c1; i++){
        cout << "Enter array elements: " << endl;
        cin >> arr1[i];
    }
    for(int j=0; j<c1; j++){
        cout << arr1[j] << " ";
    }
    cout << endl;
    int c2;
    cout << "Enter 2nd array length: " << endl;
    cin >> c2;
    int arr2[c2];
    for(int m=0; m<c2; m++){
        cout << "Enter 2nd elements: " << endl;
        cin >> arr2[m];
    }
    for(int n=0; n<c2; n++){
       cout << arr2[n] << " ";
    }
    cout << endl;
    int merged[c1+c2];
    int e1=0;
    int e2=0;
    int e3=0;
    while(e1 < c1 && e2 < c2){
        if(arr1[e1] < arr2[e2]){
            merged[e3++] = arr1[e1++];
        }else{
            merged[e3++] = arr2[e2++];

        }
    }
    while(e1 < c1){
        merged[e3++] = arr1[e1++];
    }
    while(e2 < c2){
        merged[e3++] = arr2[e2++];
    }
    cout << "The merged and sorted array: " << endl;
    int y=0;
    while(y<c1+c2){
        cout << merged[y] << " ";
        y++;
    }
    cout << endl;

    return 0;
}

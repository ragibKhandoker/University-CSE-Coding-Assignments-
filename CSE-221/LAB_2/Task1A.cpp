// This task is for O(n**2) format algorithm
#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter array length: " << endl;
    cin >> c1;
    int c2;
    cout << "Enter Targeted value: " << endl;
    cin >> c2;
    int arr[c1];
    for(int i=0; i<c1; i++){
        cout << "Enter array elements: " << endl;
        cin >> arr[i];
    }
    cout << "The array is: " << endl;
    for(int j=0; j<c1; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    for(int k=0; k<c1-1; k++){
        for(int r=k+1; r<c1; r++){
            if(arr[k] + arr[r] == c2){
                cout << k + 1 << " " << r + 1 << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
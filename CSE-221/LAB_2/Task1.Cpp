#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter array length: " << endl;
    cin >> c1;
    int c2;
    cout << "Enter targeted value: " << endl;
    cin >> c2;
    int arr[c1];
    for(int i=0; i<c1; i++){
        cout << "Enter array elements: " << endl;
        cin >> arr[i];
    }
    cout << "The array is:" << endl;
    for(int j=0; j<c1; j++){
        cout << arr[j] << " ";
    }
    int x = 0;
    int y = c1 -1;
    while(x < y){
        int sum = arr[x] + arr[y];
        if(sum == c2){
            cout << x+1 << " " << y+1 << endl;
            return 0;
        }else if(sum > c2){
            y--;
        }else if(sum < c2){
            x++;
        }
    }
    cout << endl;
    cout << "IMPOSSIBLE";
    return 0;
}
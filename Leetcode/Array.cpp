#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int length = sizeof(arr) / 1;
    for(int i=0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
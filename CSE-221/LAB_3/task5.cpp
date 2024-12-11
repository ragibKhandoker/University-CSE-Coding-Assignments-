#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i= low-1;
    for(int j=low; j<high; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp1 = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp1;
    return i+1;

}
void quickSort(vector<int> &arr,int low,int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);

    }
}

int main(){
    int c1;
    cout << "Enter array length: " << endl;
    cin >> c1;
    vector<int> arr(c1);
    for(int i=0; i<c1; i++){
        cout << "Enter array elements: " << endl;
        cin >> arr[i];
    }
    cout << "The array is: " << endl;
    for(int j=0; j<c1; j++){
        cout << arr[j] << " ";
    }
    quickSort(arr, 0, c1-1);
    cout << endl;
    cout << "The sorted array is: " << endl;
    for(int f=0; f<c1; f++){
        cout << arr[f] << " ";
    }
    return 0;

}
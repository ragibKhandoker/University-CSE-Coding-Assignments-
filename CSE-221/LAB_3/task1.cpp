#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int temp[], int left, int right, int mid){
    int i = left;
    int j = mid+1;
    int k = left;

    // merge the two subarrays into temp
    while(i<=mid && j<= right){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=right){
        temp[k] = arr[j];
        j++;
        k++;
    }
    // copy the sorted subarray into the original array
    for(i=left; i<= right; i++){
        arr[i] = temp[i];
    }
}
// merge sort function to recursively divide the array and sort
void mergeSort(int arr[],int temp[], int left, int right){
    if(left < right){
        int m = (left + right) / 2;
        // recursively sort the left and the right subarrays
        mergeSort(arr,temp,left,m);
        mergeSort(arr,temp,m+1,right);
        // merge the sorted subarrays
        merge(arr,temp,left,right,m);
    }
}
int main(){
    int c1;
    cout << "Enter array length: " << endl;
    cin >> c1;
    int arr[c1];
    int temp[c1];
    for(int i=0; i<c1; i++){
        cout << "Enter array elements: " << endl;
        cin >> arr[i];
    }
    mergeSort(arr,temp,0,c1-1);
    cout << "Sorted array: ";
    for(int j=0; j<c1; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}
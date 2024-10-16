#include <iostream>
using namespace std;
int* addSum(int arr[], int length, int target){
    static int newArr[2];
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i] + arr[j] == target){
                newArr[0] = i;
                newArr[1] = j;
                return newArr;
            }
        }
    }return newArr;

}
int main(){
    int arr1[] = {2,7,11,15};
    int target1 = 9;
    int length1 = sizeof(arr1) / 1;
    int* result = addSum(arr1, length1,target1);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    int arr2[] = {3,2,4};
    int target2 = 6;
    int length2 = sizeof(arr2) / 1;
    int* result2 = addSum(arr2, length2, target2);
    cout << "[" << result2[0] << "," << result2[1] << "]" << endl;
    int arr3[] = {3,3};
    int target3 = 6;
    int length3 = sizeof(arr3) / 1;
    int* result3 = addSum(arr3, length3,target3);
    cout << "[" << result3[0] << "," << result3[1] << "]" << endl;
    return 0;
}
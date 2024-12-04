// The input two array must be sorted
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c1;
    cout << "Enter 1st array length: "<< endl;
    cin >> c1;
    int arr1[c1];
    for(int i=0; i<c1; i++){
        cout << "Enter 1st array elements: " << endl;
        cin >> arr1[i];
    }
    cout << "The 1st array is: " << endl;
    for(int j=0; j<c1; j++){
        cout << arr1[j] << " ";
    }
    cout << endl;
    int c2;
    cout << "Enter 2nd array length: " << endl;
    cin >> c2;
    int arr2[c2];
    for(int i1=0; i1<c2; i1++){
        cout << "Enter 2nd array elements: " << endl;
        cin >> arr2[i1];
    }
    cout << "The 2nd array is: " << endl;
    for(int j1=0; j1<c2; j1++){
        cout << arr2[j1] << " ";
    }
    int mergedArr[c1+c2];
    for(int u=0; u<c1; u++){
        mergedArr[u] = arr1[u];
    }
    for(int d=0; d<c2; d++){
        mergedArr[c1 + d] = arr2[d];
    }
    cout << endl;
    cout << "The merged array: " << endl;
    for(int k=0; k<c1+c2; k++){
        cout << mergedArr[k] << " ";
    }
    // count sort from here
    int maxE = mergedArr[0];
    for(int n=1; n<c1+c2; n++){
        if(mergedArr[n] > maxE){
            maxE = mergedArr[n];
        }
    }
    int count[maxE+1];
    for(int g=0; g<= maxE; g++){
        int y = mergedArr[g];
        count[y]++;
    }
    int idx=0;
    for(int s=0; s<= maxE; s++){
        while()
    }

    return 0;

}
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("inp2.txt","r",stdin);
    freopen("22301202.txt","w",stdout);
    int c1;
    // cout << "Enter an array length: " << endl;
    cin >> c1;
    int arr[c1];
    for(int i=0; i<c1; i++){
        // cout << "Enter array elements: " << endl;
        cin >> arr[i];
    }
    cout << "The array is: " << endl;
    for(int j=0; j<c1; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    int c=0;
    for(int k=0; k<c1-1; k++){
        for(int u=0; u<c1-1-k; u++){
            c++;
            if(arr[u] < arr[u+1]){
                int temp = arr[u];
                arr[u] = arr[u+1];
                arr[u+1] = temp;
                c++;
            }
        }

    }
    cout << "The count value is:" << c << endl;
    return 0;
    }
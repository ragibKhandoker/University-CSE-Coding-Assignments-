#include <iostream>
// #include <stdbool.h>
using namespace std;
int main(){
    freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    int c1;
    // cout << "Enter array length:" << endl;
    cin >> c1;
    int arr[c1];
    int j=0;
    do{
        // cout<< "Enter array elements: " << endl;
        cin >> arr[j];
        j++;
    }
    while(j<c1);
    cout << "The array is: " << endl;
    int f=0;
    do{
        cout << arr[f] << " ";
        f++;
    }
    while(f<c1);
    // bool flg = false;

    for(int x1 = 0; x1 < c1-1; x1++){
        bool flg = false;
        for(int x2 = 0; x2 <c1 -x1-1; x2++){
            if(arr[x2] > arr[x2 + 1]){
                int temp = arr[x2];
                arr[x2] = arr[x2+1];
                arr[x2+1] = temp;
                flg = true;

            }
        }
        if(flg == false){
            cout << arr[x1];
        }
    }
    cout << "\nThe new array is:" << endl;
    int y=0;
    do{
        cout << arr[y] << " ";
        y++;
    }
    while(y<c1);


    return 0;
}
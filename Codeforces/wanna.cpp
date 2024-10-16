#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter number of levels: " << endl;
    cin >> c1;
    bool arr[101] = {false};
    int c2;
    cout << "Enter X pass numbers: " << endl;
    cin >> c2;
    for(int i=0; i<c2; i++){
        int k1;
        cout << "Enter level numbers: " << endl;
        cin >> k1;
        arr[k1] = true;
    }
    int c3;
    cout << "Enter Y pass numbers: " << endl;
    cin >> c3;
    for(int i=0; i<c3; i++){
        int k2;
        cout << "Enter level numbers: " << endl;
        cin >> k2;
        arr[k2] = true;
    }
    bool flg2 = true;
    for(int i=1; i<=c1; i++){
        if(!arr[i]){
            flg2 = false;
            break;

        }
    }
    if(flg2 == true){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard." << endl;
    }
    return 0;

}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    // bool flg = true;
    // while(n > 0){
    //     if(n % 10 != 4 && n % 10 != 7){
    //         flg = false;
    //         break;
    //     }n = n / 10;
    // }
    bool flg = true;
    for(; n>0; n/=10){
        if(n % 10 == 4 || n % 10 == 7){
            flg = true;
        }else{
            flg = false;
            break;
        }
    }
    if(flg == true){
        cout << "YES";
    }else{
        cout << "NO";
    }return 0;
}
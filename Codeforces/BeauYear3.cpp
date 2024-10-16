#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter a year: " << endl;
    cin >> c1;
    c1++;
    bool flg = false;
    while(flg == false){
        int k1 = (c1 /1000);
        int k2 = (c1 / 100) % 10;
        int k3 = (c1 / 10)% 10;
        int k4 = (c1 % 10);
        if(k1 != k2 && k1 != k3 && k1 != k4 && k2 != k3 && k2!= k4 && k3 != k4){
            flg = true;
        }else{
            c1++;
        }

    }cout << c1;
    return 0;
}
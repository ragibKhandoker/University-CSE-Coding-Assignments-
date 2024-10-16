#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter a number: " << endl;
    cin >> c1;
    if(c1 % 2 == 0){
        int j1 = (c1/2);
        cout << j1;
    }else{
        int j2 = -(c1+1)/2;
        cout << j2;
    }
    return 0;
}
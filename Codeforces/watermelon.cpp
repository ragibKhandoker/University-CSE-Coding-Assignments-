#include <iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter a number: " << endl;
    cin >> n1;
    if(n1>2){
        if(n1 % 2 == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        };
    }else{
        cout << "The number is not divisible" << endl;
    };
    return 0;
};
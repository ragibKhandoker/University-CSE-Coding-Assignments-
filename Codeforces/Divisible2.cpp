#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter a number: " << endl;
    cin >> c1;
    for(int i=0; i <c1; i++){
        int c2,c3;
        cout << "Enter 1st number: " << endl;
        cin >> c2;
        cout << "Enter 2nd number: " << endl;
        cin >> c3;
        int c4 = c2 % c3;
        if(c4 == 0){
            cout << 0 << endl;
        }else{
            cout << c3-c4 << endl;
        }
    }return 0;
}
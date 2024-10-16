#include <iostream>
using namespace std;
int main(){
    int c1,c2;
    cout << "Enter a Limak's age: " << endl;
    cin >> c1;
    cout << "Enter Bob's age: " << endl;
    cin >> c2;
    int c = 0;
    while(c1 <= c2){
        c1 = c1*3;
        c2 = c2*2;
        c++;
    }cout << "The required output: " << c;
    return 0;
}
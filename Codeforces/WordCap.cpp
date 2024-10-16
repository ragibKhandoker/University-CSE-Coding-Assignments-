#include <iostream>
using namespace std;
int main(){
    string c1;
    cout << "Enter a string: " << endl;
    cin >> c1;
    if(c1.length() > 0){
        if(c1[0] >= 'a' && c1[0] <= 'z'){
            c1[0] = c1[0] -32;
        }

    }
    cout << c1;
    return 0;
}
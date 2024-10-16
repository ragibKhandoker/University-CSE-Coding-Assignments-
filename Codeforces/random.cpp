#include <iostream>
#include <string>
using namespace std;
int main(){
    string c1;
    cout << "Enter a string: " << endl;
    cin >> c1;
    for(int i=0; i< c1.length(); i++){
        if(c1.length() > 10){
            cout << c1[0] << c1.length()-2 << c1.back() << endl;
        }else{
            cout << c1 << endl;
        }break;
    }return 0;
}
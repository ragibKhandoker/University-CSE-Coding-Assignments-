#include <iostream>
#include <string>
using namespace std;
int main(){
    string c1;
    string c2;

    cout << "Enter a number: " << endl;
    cin >> c1;
    cout << "Enter another number: " << endl;
    cin >> c2;
    if(c1.length() != c2.length()){
        cout << "Error" << endl;
        return 1;
    };
    string c3(c1.length(), '0');
    for(int i=0; i<c1.length(); i++){
        if(c1[i] == c2[i]){
            c3[i] = '0';
        }else{
            c3[i] = '1';
        }
    }
    cout << c3;
    return 0;


}
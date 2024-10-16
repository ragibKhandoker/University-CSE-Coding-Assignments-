#include <iostream>
using namespace std;
int main(){
    string c1,c2;
    cout << "Enter a string: " << endl;
    cin >> c1;
    // string digits;
    // int i = 0;
    // while (i < s.size()) {
    //     char c = s[i];
    //     if (c >= '1' && c <= '3') {
    //         digits += c;
    //     }
    //     ++i;
    // }

    for(char x1:c1){
        if(x1 >= '1' && x1 <= '3'){
            c2 += x1;
        }
    }
    for(int i=0; i<c2.length(); i++){
        for(int j=0; j<c2.length()-1-i; j++){
            if(c2[j] > c2[j+1]){
                char temp = c2[j];
                c2[j] = c2[j+1];
                c2[j+1] = temp;
            }
        }
    }
    for(int i=0; i<c2.length(); i++){
        if(i > 0){
            cout << "+";
        }
        cout << c2[i];

    }return 0;

}
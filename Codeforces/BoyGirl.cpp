#include <iostream>
using namespace std;
int main(){
    string c1;
    bool flg;
    cout << "Enter a string: " << endl;
    cin >> c1;
    int c= 0;
    int n1 = c1.length();
    for(int i=0; i<n1; i++){
        flg = true;
        // assuming the character is distinct
        for(int j=0; j<i; j++){
            if(c1[i] == c1[j]){
                flg = false;
                // when character is not distinct no need to check further
                break;
            };
        }if(flg == true){
            c++;
        }
    }if(c % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM";
    }
    return 0;
}

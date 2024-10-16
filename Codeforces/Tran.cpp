#include <iostream>
using namespace std;
int main(){
    string c1,c2;
    cout << "Enter a string: " << endl;
    cin >> c1;
    cout << "Enter another string: " << endl;
    cin >> c2;
    bool flg = true;
    int g1 = c1.length();
    int g2 = c2.length();
    if(g1 == g2){
        for(int i=0; i<g1; i++){
           if(c1[i] != c2[g2-1-i]){
            flg = false;
            break;
           };
        }
    }else{
        flg = false;
    }
    if(flg == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }return 0;
}
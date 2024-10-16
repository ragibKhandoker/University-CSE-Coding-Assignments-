#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter number of students: " << endl;
    cin >> c1;
    bool flg = false;
    int i= 0;
    while(i < c1){
        int c;
        cout << "Enter your opinion: " << endl;
        cin >> c;
        if(c == 1){
            flg = true;
            break;
        }
        i++;

    }if(flg == true){
        cout << "HARD";
    }else{
        cout << "EASY";
    }return 0;
}
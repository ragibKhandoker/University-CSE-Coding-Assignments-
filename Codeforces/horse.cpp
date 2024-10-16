#include <iostream>
using namespace std;
int main(){
    int c1[4];
    for(int i=0; i< 4; i++){
        cout << "Enter numbers: " << endl;
        cin >> c1[i];

    }
    bool flg = false;
    int c = 0;
    for(int k=0; k< 4; k++){
        for(int q=0; q< k; q++){
            if(c1[k] == c1[q]){
                flg = true;
            }else{
                flg = false;
            }
        }
        if(flg == false){
            c++;
        }
    };
    int g1 = 4-c;
    cout << "minimum color of horses need: " << g1;
    return 0;

}
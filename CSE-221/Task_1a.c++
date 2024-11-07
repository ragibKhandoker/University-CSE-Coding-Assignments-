#include <iostream>
using namespace std;
int main(){
    freopen("input1a.txt","r",stdin);
    freopen("output1a.txt","w",stdout);
    int c1;
    cin >> c1;
    int i=0;
    do{
        int c2;
        cin >> c2;
        if(c2 % 2 == 0){
            cout << c2 << " is an Even number." << endl;
        }else{
            cout << c2 << " is an Odd number." << endl;
        }
        i++;
    }
    while(i<c1);
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter number of rooms: " << endl;
    cin >> c1;
    int c = 0;
    for(int i=0; i< c1; i++){
        int c2,c3;
        cout << "Enter 1st room: " << endl;
        cin >> c2;
        cout << "Enter second room: " << endl;
        cin >> c3;
        if(c3-c2 >= 2){
            c++;
        }
    }cout<< c;
    return 0;

}
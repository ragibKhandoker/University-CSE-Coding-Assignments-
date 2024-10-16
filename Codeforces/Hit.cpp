#include <iostream>
using namespace std;
int main(){
    int c1;
    cout << "Enter a number: " << endl;
    cin >> c1;
    int count = 0;
    if(c1 >= 100){
        count += c1 /100;
        // number of hundred dollers bill
        c1 = c1 % 100;
        // remaining amount

    }
    if(c1 >= 20){
        count += c1 /20;
        // number of twenty dollers bill
        c1 = c1 % 20;
        // remaining amount
    }
    if(c1 >= 10){
        count += c1 /10;
        // number of 10 dollers bill
        c1 = c1 % 10;
        // remaining amount

    }
    if(c1 >= 5){
        count += c1/5;
        // number of 5 dollers bill
        c1 = c1 % 5;
        // remaining amount
    }
    if(c1 >= 1){
        count += c1;
    }
    cout << "Minimum number of bills: " << count << endl;
    return 0;

}
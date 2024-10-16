#include <iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter a number: " << endl;
    cin >> n1;
    int n2 = n1 / 1000;
    if(n2 % 2 == 0){
        cout << "The number is Even" << endl;
    }else{
        cout << "The number is Odd" << endl;
    }
    return 0;

}
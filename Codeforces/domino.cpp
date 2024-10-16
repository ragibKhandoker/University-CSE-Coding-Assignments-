// The maximal number of domino if (M*N)/2
#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout << "Enter a height of the board: " << endl;
    cin >> n1;
    cout << "Enter the width of the board: " << endl;
    cin >> n2;
    int formula = (n1*n2)/2;
    cout << "The maximal number of dominos are: " << formula << endl;
    return 0;

}
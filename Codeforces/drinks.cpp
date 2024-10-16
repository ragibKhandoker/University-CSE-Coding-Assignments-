#include <iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter a number: " << endl;
    cin >> n1;
    int sum = 0;
    for(int i=0; i<n1; i++){
       int n1;
       cout << "Enter correspondings number: " << endl;
       cin >> n1;
       sum += n1;

    }
    double avg = (sum / n1);
    cout << avg << endl;
    return 0;
}
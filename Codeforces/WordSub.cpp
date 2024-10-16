#include <iostream>
using namespace std;
int main(){
    int n;
    int k;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "Enter number of times: " << endl;
    cin >> k;
    for(int i=0; i<k; i++){
        if(n % 10 == 0){
            n = n/10;
        }else if(n % 10 != 0){
            n = n -1;
        }else{
            cout << "The input is invalid!";
        }
    }cout << n;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cout << "Enter number of friends: " << endl;
    cin >> n1;
    cout << "Enter the height: " << endl;
    cin >> n2;
    int total = 0;
    for(int i=0; i<n1; i++){
        int c1;
        cout << "Enter friend's height accordingly: " << endl;
        cin >> c1;
        if(c1 <= n2){
            total += 1;
        }else if(c1 > n2){
            total += 2;
        }else{
            cout << "Invalid";
        }
    }cout << "Total is: " << total;
    return 0;
}
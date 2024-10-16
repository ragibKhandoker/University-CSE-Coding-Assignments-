#include <iostream>
using namespace std;
int main(){
    int n1;
    string c1;
    cout << "Enter number of stones: " << endl;
    cin >> n1;
    cout << "Enter a string: " << endl;
    cin >> c1;
    int c = 0;
    for(int i=0; i<n1-1; i++){
        if(c1[i] == c1[i+1]){
            c++;
        }
    }
    cout << c;
    return 0;
}
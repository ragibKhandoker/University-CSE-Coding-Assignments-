#include <iostream>
using namespace std;
int main(){
    string c1;
    cout << "Enter a string: " << endl;
    cin >> c1;
    int c=0;
    int n = c1.length();
    for(int i=0; i<n-1; i++){
        if(c1[i] == c1[i+1]){
            c++;
        }
    }cout << c;
    return 0;
}
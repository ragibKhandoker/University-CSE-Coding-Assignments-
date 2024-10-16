#include <iostream>
using namespace std;
int main(){
    int c1;
    int c2;
    string c3;
    cout << "Number of students: " << endl;
    cin >> c1;
    cout << "swapping times: " << endl;
    cin >> c2;
    cout << "Enter the pair string: " << endl;
    cin >> c3;
    for(int i=0; i<c2; i++){
        for(int j=0; j<c3.length()-1; j++){
            if(c3[j] == 'B' && c3[j+1] == 'G'){
                char temp = c3[j];
                c3[j] = c3[j+1];
                c3[j+1] = temp;
                j++;
            }
        }
    }cout << c3;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
    freopen("input1b.txt","r",stdin);
    freopen("output1b.txt","w",stdout);
    int c1;
    // cout << "Enter a value: " << endl;
    cin >> c1;
    int i=0;
    do{
        string prefix;
        cin >> prefix;
        if(prefix != "calculate"){
            cerr << "Invalid input format" << endl;
            return false;
        }
        int x1;
        // cout << "Enter 1st number: " << endl;
        cin >> x1;
        char op;
        // cout << "Enter an operator" << endl;
        cin >> op;
        int x2;
        // cout << "Enter 2nd number: " << endl;
        cin >> x2;
        if(op == '+'){
            cout << "The result of " << x1 << " " << op << " "<< x2 << " " <<"is" << " " << x1 + x2 << endl;
        }else if(op == '-'){
            cout << "The result of " << x1 << " " << op << " " << x2 << " " << "is" << " " << x1 - x2 << endl;
        }else if(op == '*'){
            cout << "The result of " << x1 << " " << op << " " << x2 << " " << "is" << " " << x1 * x2 << endl;
        }else if(op == '/'){
            if(x2 != 0){
                cout << "The result of " << x1 << " " << op << " " << x2 << " " << "is" << " " << double(x1)/x2 << endl;
            }else{
                cout << "Value Infinity" << endl;
            }
        }else{
            cerr << "Invalid operation: " << endl;
            return false;
        }
        i++;

    }
    while(i<c1);
    return 0;
}
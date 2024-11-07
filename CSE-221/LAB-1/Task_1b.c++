#include <iostream>
#include <sstream>
using namespace std;
int main(){
    freopen("input1b.txt","r",stdin);
    freopen("output1b.txt","w",stdout);
    int c1;
    cin >> c1;
    int y=0;
    do{
        char arr[10];
        int i=0;
        do{
            cin >> arr[i];
            i++;
        }
        while(i<9);
        arr[9] = '\0';
        int x1,x2;
        char g1;
        cin >> x1 >> g1 >> x2;
        if(g1 == '+'){
            cout << "The result of " << x1 << " " << g1 << " " << x2 << " is " << x1+x2 << endl;
        }else if(g1 == '-'){
            cout << "The result of " << x1 << " "<< g1 << " " << x2 << " is " << x1-x2 << endl;
        }else if(g1 == '*'){
            cout << "The result of " << x1 << " " << g1 << " " << x2 << " is " << x1*x2 << endl;
        }else if(g1 == '/'){
            if(x2!= 0){
                cout << "The result of " << x1 << " " << g1 << " " << x2 << " is " << (double)x1 / x2 << endl;
            }else{
                cout << "Value error" << endl;
            }
        }
        y++;


    }
    while(y<c1);
    return 0;

}

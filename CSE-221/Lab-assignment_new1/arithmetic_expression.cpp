#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input2.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    // cout << "Enter number of test cases: " << endl;
    cin >> t;
    while(t--){
        string first1;
        cin >> first1;
        if(first1 != "calculate"){
            cout << "Invalid input format" << endl;
            return 1;
        }
        else{
            if(first1 == "calculate"){
                int c_1;
                // cout << "Enter 1st number: " << endl;
                cin >> c_1;
                char x1;
                // cout << "Enter a operator: " << endl;
                cin >> x1;
                int c_2;
                // cout << "Enter 2nd number: " << endl;
                cin >> c_2;
                if(x1 == '+'){
                    float z_1 = double(c_1) + c_2;
                    cout << fixed << setprecision(6) << z_1 << endl;
                }
                else if(x1 == '-'){
                    float z_2 = double(c_1) - c_2;
                    cout << fixed << setprecision(6) << z_2 << endl;
                }
                else if(x1 == '*'){
                    float z_3 = double(c_1) * c_2;
                    cout << fixed << setprecision(6) << z_3 << endl;

                }
                else if(x1 == '/'){
                    if(c_2 != 0){
                       float z_4 = double(c_1)/c_2;
                       cout << fixed << setprecision(6) << z_4 << endl;
                    }
                    else{
                        cout << "Infinity" << endl;
                    }
                }
                else{
                    cout << "Invalid operation" << endl;
                }

            }
        }



    }
    return 0;
}
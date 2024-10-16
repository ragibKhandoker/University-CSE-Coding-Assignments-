#include <iostream>
using namespace std;
int main(){
    string c1;
    cout << "Enter a string: " << endl;
    getline(cin,c1);
    bool arr[26] = {false};
    int count = 0;
    if(c1.length() == 0){
        cout << 0 << endl;
    }else{
        for(int i=0; i<c1.length(); i++){
            if(c1[i] >= 'a' && c1[i] <= 'z'){
                int k1 = c1[i] - 'a';
                if(!arr[k1]){
                    arr[k1] = true;
                    count++;

                }
            }
        }
    }cout << count << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int c1;
    bool alp[26] = {false};
    cout << "Enter length of the string: " << endl;
    cin >> c1;
    string c2;
    cout << "Enter the string: " << endl;
    cin >> c2;
    getline(cin,c2);
    for(int i=0; i<c1; i++){
        // looping through the string
        char k1 = c2[i];
        if(k1 >= 'A' && k1 <= 'Z'){
            k1 = k1 + 32;
            // converting into lowercase letters
        }if(k1 >= 'a' && k1 <= 'z'){
            alp[k1 - 'a'] = true;
            // if already lowercase letter exists then get it to the arr[26]
        }

    }
    // bool flg = true;
    // for(int i=0; i<26; i++){
    //     if(!alp[i]){
    //         flg = false;
    //         break;
    //     }
    // }
    bool flg = true;
    int i=0;
    while(i<26){
        if(!alp[i]){
            flg = false;
            break;
        }
        i++;
    }
    if(flg == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
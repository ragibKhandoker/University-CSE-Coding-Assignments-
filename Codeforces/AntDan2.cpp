#include <iostream>
using namespace std;
int main(){
    int n1;
    string c1;
    cout << "Enter a number: " << endl;
    cin >> n1;
    cout << "Enter a string: " << endl;
    cin >> c1;
    int count1 = 0;
    int count2 = 0;
    int i=0;
    while(i<n1){
        if(c1[i] == 'A'){
            count1++;
        }else if(c1[i] == 'D'){
            count2++;
        }
        i++;
    }
    // for(int i=0; i<n1; i++){
    //     if(c1[i] == 'A'){
    //         count1++;
    //     }else if(c1[i] == 'D'){
    //         count2++;
    //     }
    // }
    if(count1 == count2){
        cout << "Friendship";
    }else if(count1 > count2){
        cout << "Anton";
    }else if(count1 < count2){
        cout << "Danik";
    }
    return 0;
}
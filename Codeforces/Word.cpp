#include <iostream>
using namespace std;
int main(){
    string c1;
    cout << "Enter a string: " << endl;
    cin >> c1;
    int l1 =0;
    int l2 =0;
    int n = c1.length();
    for(int i=0; i<n; i++){
        if(c1[i] >= 'a' && c1[i] <= 'z'){
            l1++;
        }else if(c1[i] >= 'A' && c1[i] <= 'Z'){
            l2++;
        }
    }if(l1 < l2){
        for(int j=0; j<n; j++){
          if(c1[j] >= 'a' && c1[j] <= 'z'){
            c1[j] = c1[j] - 32;
          }
        }
    }else if(l1 > l2){
        for(int k=0; k<n; k++){
            if(c1[k] >= 'A' && c1[k] <= 'Z'){
                c1[k] = c1[k] + 32;
            }
        }
    }else if(l1 == l2){
        for(int p=0; p<n; p++){
            if(c1[p] >= 'A' && c1[p] <= 'Z'){
                c1[p] = c1[p] + 32;
            }
        }
    }cout << c1;
    return 0;
}
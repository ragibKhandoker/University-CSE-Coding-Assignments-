#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int curr_passenger = 0;
    int max_passenger = 0;
    for(int i=0; i < n; i++){
        int exit_passenger;
        int enter_passenger;
        cout << "Enter existing passenger: " << endl;
        cin >> exit_passenger;
        cout << "Enter entering passenger: " << endl;
        cin >> enter_passenger;
        curr_passenger -= exit_passenger;
        curr_passenger += enter_passenger;
        if(curr_passenger > max_passenger){
            max_passenger = curr_passenger;
        }
    }cout << max_passenger << endl;
    return 0;
}
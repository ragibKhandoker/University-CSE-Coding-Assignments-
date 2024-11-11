#include <iostream>
#include <string>
using namespace std;
struct Train{
    string name;
    string departureTime;
    string place;
    int index;
};

bool compareTrains(Train a,Train b){
    if(a.name != b.name){
        return a.name < b.name;
    }
    if(a.departureTime != b.departureTime){
        return a.departureTime > b.departureTime;
    }
    return a.index < b.index;
}
void bubbleSort(Train arr[],int len){
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-1-i; j++){
            if(!compareTrains(arr[j],arr[j+1])){
                Train temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){
    freopen("input4.txt","r",stdin);
    freopen("output4.txt","w",stdout);
    int x;
    // cout << "Enter a value:" << endl;
    cin >> x;
    cin.ignore();
    Train arr[x];
    for(int i=0; i<x; i++){
        string line;
        getline(cin, line);
        string name;
        int pos=0;
        while(line[pos] != ' '){
            name += line[pos++];
        }
        pos += 20;
        string place;
        while (line[pos] != ' ' || (line[pos] == ' ' && line[pos + 1] != 'a' && line[pos + 2] != 't')) {
            place += line[pos++];
        }
        pos +=4;
        string departureTime;
        for(int k=0; k<5; k++){
            departureTime += line[pos++];
        }

        arr[i].name = name;
        arr[i].departureTime = departureTime;
        arr[i].index = i;
        arr[i].place = place;
    }
    bubbleSort(arr,x);
    for(int i=0; i<x; i++){
        cout << arr[i].name << " will departure for " << arr[i].place << " at " << arr[i].departureTime << endl;
    }

    return 0;
}
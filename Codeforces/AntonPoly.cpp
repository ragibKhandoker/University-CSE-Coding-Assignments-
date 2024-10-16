#include <iostream>
using namespace std;
int main(){
    int tetra = 4;
    int cube = 6;
    int oct = 8;
    int dode = 12;
    int icos = 20;
    int c1;
    cout << "Enter a number: " << endl;
    cin >> c1;
    int count = 0;
    for(int i=0; i<c1; i++){
        string s1;
        cout << "Enter the string: " << endl;
        cin >> s1;
        if(s1 == "Tetrahedron"){
            count += tetra;
        }else if(s1 == "Cube"){
            count += cube;
        }else if(s1 == "Octahedron"){
            count += oct;
        }else if(s1 == "Dodecahedron"){
            count += dode;
        }else if(s1 == "Icosahedron"){
            count += icos;
        }
    }cout << count << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    int f;
    cin >> f;

    int arr1[f];
    int arr2[f];

    int y = 0;
    do {
        cin >> arr1[y];
        y++;
    } while (y < f);

    int g = 0;
    do {
        cin >> arr2[g];
        g++;
    } while (g < f);


    int i1 = 0;
    do {
        int j1 = 0;
        do {
            if (j1 < f - i1 - 1) {
                if (arr2[j1] < arr2[j1 + 1] || (arr2[j1] == arr2[j1 + 1] && arr1[j1] > arr1[j1 + 1])) {

                    int temp1 = arr2[j1];
                    arr2[j1] = arr2[j1 + 1];
                    arr2[j1 + 1] = temp1;


                    int temp2 = arr1[j1];
                    arr1[j1] = arr1[j1 + 1];
                    arr1[j1 + 1] = temp2;
                }
            }
            j1++;
        } while (j1 < f - i1 - 1);
        i1++;
    } while (i1 < f - 1);

    int w = 0;
    do {
        cout << "ID: " << arr1[w] << " Mark: " << arr2[w] << endl;
        w++;
    } while (w < f);

    return 0;
}

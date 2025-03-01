#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id, mark;
    Student(int id, int mark) {
        this->id = id;
        this->mark = mark;
    }
};

// Sorting function: Higher marks first, if same then lower ID first
bool compare(Student a, Student b) {
    if (a.mark == b.mark) {
        return a.id < b.id;
    }
    return a.mark > b.mark;
}

int selectionSort(vector<Student>& students, int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (compare(students[j], students[maxIdx])) {
                maxIdx = j;
            }
        }
        if (maxIdx != i) {
            swap(students[i], students[maxIdx]);
            swaps++;
        }
    }
    return swaps;
}

int main() {
    freopen("input9.txt","r",stdin);
    freopen("output9.txt","w",stdout);
    int N;
    cin >> N;

    vector<Student> students;
    vector<int> ids(N), marks(N);

    for (int i = 0; i < N; i++) {
        cin >> ids[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> marks[i];
    }

    for (int i = 0; i < N; i++) {
        students.push_back(Student(ids[i], marks[i]));
    }

    int minSwaps = selectionSort(students, N);

    cout << "Minimum swaps: " << minSwaps << endl;
    for (Student s : students) {
        cout << "ID: " << s.id << " Mark: " << s.mark << endl;
    }

    return 0;
}

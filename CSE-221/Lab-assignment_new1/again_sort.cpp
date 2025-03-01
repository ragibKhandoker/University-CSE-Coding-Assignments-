#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id,marks;
        Student(int id,int marks)
        {
            this->id = id;
            this->marks = marks;
        }
};
bool compare(Student f1, Student f2){
    if(f1.marks == f2.marks){
        return f1.id < f2.id;
    }
    return f1.marks > f2.marks;
}
int selection_sort(vector<Student>& students, int n1){
    int c = 0;
    for(int i=0; i<n1-1; i++){
        int mx_i = i;
        int g=i+1;
        while(g<n1){
            if(compare(students[g],students[mx_i])){
                mx_i = g;
            }
            g++;
        }
        if(mx_i != i){
            swap(students[i],students[mx_i]);
            c++;

        }
    }
    return c;
}
int main() {
    freopen("input15.txt","r",stdin);
    freopen("output15.txt","w",stdout);
    int c1;
    cin >> c1;

    vector<Student> students;
    vector<int> ids(c1), marks(c1);
    int k=0;
    while(k < c1) {
        cin >> ids[k];
        k++;
    }
    int j=0;
    while(j < c1) {
        cin >> marks[j];
        j++;
    }
    int i1=0;
    while(i1 < c1) {
        students.push_back(Student(ids[i1], marks[i1]));
        i1++;
    }

    int min_Swaps = selection_sort(students, c1);

    cout << "Minimum swaps: " << min_Swaps << endl;
    for (auto s1 : students) {
        cout << "ID: " << s1.id << " Mark: " << s1.marks << endl;
    }

    return 0;
}
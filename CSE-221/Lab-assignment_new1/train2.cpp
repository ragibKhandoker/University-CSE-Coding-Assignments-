#include <bits/stdc++.h>
using namespace std;
class Train{
    public:
    string name;
    string destination;
    string time;
    int priority;
    Train(string name,string destination,string time,int priority){
        this->name = name;
        this->destination = destination;
        this->time = time;
        this->priority = priority;
    }
};
class compare{
    public:
    bool operator()(const Train &x1, const Train &x2){
        if(x1.name != x2.name){
            return x1.name < x2.name;
        }
        if(x1.time != x2.time){
            return x1.time > x2.time;
        }
        return x1.priority < x2.priority;
    }
};
int main()
{
    // freopen("input7.txt","r",stdin);
    // freopen("output7.txt","w",stdout);
    int c1;
    cin >> c1;
    cin.ignore();

    vector<Train> trains;

    for (int j = 0; j < c1; j++)
    {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string word1, name1, destination1, time1;
        vector<string> word_s;

        while (ss >> word1)
        {
            word_s.push_back(word1);
        }

        int size1 = word_s.size();
        time1 = word_s[size1 - 1];
        destination1 = word_s[size1 - 3];

        for (int j1 = 0; j1 < size1 - 4; j1++)
        {
            if (!name1.empty())
                name1 += " ";
            name1 += word_s[j1];
        }

        trains.push_back(Train(name1, destination1, time1, j));
    }

    sort(trains.begin(), trains.end(), compare());

    for (auto &x : trains)
    {
        cout << x.name << " for " << x.destination << " at " << x.time << endl;
    }

    return 0;
}

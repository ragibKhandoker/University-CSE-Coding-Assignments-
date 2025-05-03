#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES = 26;
vector<int> adj1[26];
int in_degree1[26] = {0};
bool alpha1[26] = {false};
bool topo_sort1(string &r){
    set<int> q_1;
    int x1 = 0;
    while(x1<26){
        if(alpha1[x1] && in_degree1[x1] == 0){
            q_1.insert(x1);
        }
        x1++;
    }
    while(!q_1.empty()){
        auto it = q_1.begin();
        int c1 = *it;
        q_1.erase(it);
        r += (char)(c1 + 'a');
        for(auto s1 : adj1[c1]){
            in_degree1[s1]--;
            if(in_degree1[s1] == 0){
                q_1.insert(s1);
            }
        }
    }
    int t = 0;
    int z = 0;
    while(z<MAX_NODES){
        if(alpha1[z]){
            t++;
        }
        z++;
    }
    return r.size() == t;
}
int main(){
    freopen("input7.txt","r",stdin);
    freopen("output7.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n_1;
    cin >> n_1;
    if(!cin){
        return false;
    }
    vector<string> arr(n_1);
    int i=0;
    while(i<n_1){
        cin >> arr[i];
        for(auto c1 : arr[i]){
            alpha1[c1 - 'a'] = true;
        }
        i++;
    }
    int s3=0;
    while(s3<n_1-1){
        string a1 = arr[s3];
        string b1 = arr[s3+1];
        int d = min(a1.size(),b1.size());
        bool flg = false;
        int a6 =0;
        while(a6<d){
            if(a1[a6] != b1[a6]){
                int q_1 = a1[a6] - 'a';
                int q_2 = b1[a6] - 'a';
                adj1[q_1].push_back(q_2);
                in_degree1[q_2]++;
                flg = true;
                break;
            }
            a6++;
        }
        if(!flg && a1.size() > b1.size()){
            cout << -1 << endl;
            return 0;
        }
        s3++;
    }
    string y_1;
    if(topo_sort1(y_1)){
        cout << y_1 << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}
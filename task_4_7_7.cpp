#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, string> x, pair<string, string> y){
    if (x.first < y.first) return true;
    if (x.first == y.first and x.second < y.second) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    string name, surname;
    vector<pair<string, string>> vec_pair;
    for (int i = 0; i < n; i++){
        cin >> surname >> name;
        vec_pair.push_back(make_pair(surname, name));
    }

    sort(vec_pair.begin(), vec_pair.end(), cmp);

    for (auto i : vec_pair){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
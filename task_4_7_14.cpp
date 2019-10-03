#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, vector<string>> x, pair<int, vector<string>> y){
    if (x.first < y.first) return true;
    return false;
}

int main(){
    int n, temp_int;
    string temp_str;
    map<int, vector<string>> list;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp_str >> temp_int;
        list[temp_int].push_back(temp_str);
    }
    vector<pair<int, vector<string>>> vec_school;
    for (auto item : list){
        sort(item.second.begin(), item.second.end());
        vec_school.push_back(make_pair(item.first, item.second));
    }
    sort(vec_school.begin(), vec_school.end(), cmp);

    for (auto item : vec_school){
        cout << item.first << " ";
        for (auto name : item.second){
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}
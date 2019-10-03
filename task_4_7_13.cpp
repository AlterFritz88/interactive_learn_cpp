#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<int, int> x, pair<int, int> y){
    if (x.second > y.second) return true;
    else if (x.second == y.second and x.first < y.second) return true;
    return false;
}
int main(){
    int n, temp_int;
    string temp_str;
    cin >> n;
    map<int, int> schools;
    for (int i = 0; i < n; i++){
        cin >> temp_str >> temp_int;
        schools[temp_int]++;
    }
    vector<pair<int, int>> vec_school;
    for (auto item : schools){
        vec_school.push_back(make_pair(item.first, item.second));
    }
    sort(vec_school.begin(), vec_school.end(), cmp);
    for (auto item : vec_school){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}
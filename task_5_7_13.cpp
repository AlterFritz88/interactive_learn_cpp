#include <bits/stdc++.h>
using namespace std;

bool sorting(pair<string, float> x, pair<string, float> y){
    if (x.second < y.second) return true;
    else if (x.second == y.second and x.first < y.first) return true;
    else return false;
}
int main(){
    int n; cin >> n;
    float temp_n, sum;
    vector<pair<string, float>> vec;
    string name, temp_str, student;

    for (int i = 0; i < n; i++){
        sum = 0;
        student = "";
        cin >> temp_str;
        student += temp_str;
        student += " ";
        cin >> temp_str;
        student += temp_str;
        cin >> temp_n;
        sum += temp_n;
        cin >> temp_n;
        sum += temp_n;
        cin >> temp_n;
        sum += temp_n;
        sum /= 3.0;
        vec.push_back(make_pair(student, sum));
    }
    sort(vec.begin(), vec.end(), sorting);

    float l1 = vec[0].second, l2 = vec[1].second, l3 = vec[2].second;

    for (auto i : vec){
        if (i.second == l1 or i.second == l2 or i.second == l3){
            cout << i.first << endl;
        } else break;
    }

    return 0;
}
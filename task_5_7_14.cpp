#include <bits/stdc++.h>
using namespace std;

bool sorting(pair<char, int> x, pair<char, int> y){
    if (x.second < y.second) return true;
    else if (x.second == y.second and x.first < y.first) return true;
    else return false;
}

int main(){

    map<char, int> m;
    char temp;
    cin >> temp;
    while (temp != '.'){
        if (temp != ' '){

            m[temp] += 1;
        }
        cin >> temp;
    }


    vector<pair<char, int>> vec;
    for (auto i : m){
        vec.push_back(make_pair(i.first, i.second));
    }
    sort(vec.begin(), vec.end(), sorting);

    for (auto i : vec){
        cout << i.first;
    }

    return 0;
}
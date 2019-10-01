#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> x, pair<string, int> y){
    if (x.first < y.first) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    string temp;
    vector<pair<string, int>> vec_pair;

    for (int i = 1; i <= n; i++){
        cin >> temp;
        vec_pair.push_back(make_pair(temp, i));
    }
    sort(vec_pair.begin(), vec_pair.end(), cmp);
    for (auto i : vec_pair){
        cout << i.second << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){
    if (x.first > y.first) return true;
    return false;
}
int main(){
    int n, temp;
    cin >> n;
    pair<int, int> p;
    vector<pair<int, int>> vec_p;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_p.push_back(make_pair(temp, i+1));
    }
    sort(vec_p.begin(), vec_p.end());
//    for (auto i: vec_p){
//        cout << i.first << " " << i.second << endl;
//    }

    for (int i = 0; i < n / 2; i++){
        if (vec_p[i].second < vec_p[vec_p.size() - 1 - i].second){
            cout << vec_p[i].second << " " << vec_p[vec_p.size() - 1 - i].second << endl;
        }
        else{
            cout << vec_p[vec_p.size() - 1 - i].second << " " << vec_p[i].second << endl;
        }

    }
    return 0;
}
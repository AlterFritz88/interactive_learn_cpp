#include <bits/stdc++.h>
using namespace std;

bool cmp(string x, string y){
    if (x.size() > y.size()) return true;
    if (x.size() == y.size() and x < y) return true;
    return false;
}

int main(){
    int n;
    string temp;
    cin >> n;
    vector<string> str_vec(n);
    for (int i = 0; i < n; i++){
        cin >> temp;
        str_vec.push_back(temp);
    }

    sort(str_vec.begin(), str_vec.end(), cmp);

    for (auto i : str_vec){
        cout << i << endl;
    }
    return 0;
}
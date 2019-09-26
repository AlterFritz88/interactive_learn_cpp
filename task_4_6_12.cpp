#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int heigh;
    string name;
    cin >> n;
    vector <pair<int, string>> vec;
    for (int i = 0; i < n; i++){
        cin >> name >> heigh;
        vec.push_back({heigh, name});
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    for (auto i : vec){
        cout << i.second << " " << i.first << endl;
    }
    return 0;
}
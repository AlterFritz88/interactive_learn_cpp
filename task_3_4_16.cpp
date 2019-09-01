#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, string>> items;

    for (int i = 0; i < 3; i++){
        string name;
        int age;
        cin >> name >> age;
        pair<int, string> p;
        p.first = age;
        p.second = name;
        items.push_back(p);
    }
    sort(items.begin(), items.end());

    for (auto i : items){
        cout << i.second << " " << i.first << endl;
    }
    return 0;
}
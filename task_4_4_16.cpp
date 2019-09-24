#include <bits/stdc++.h>
using namespace std;
int main(){
    int init, update;
    char plus_minus;
    string temp_str;
    set<string> list;
    cin >> init >> update;
    for (int i = 0; i < init; i++){
        cin >> temp_str;
        list.insert(temp_str);
    }

    for (int i = 0; i < update; i++){
        cin >> temp_str;
        cin >> plus_minus;
        if (plus_minus == '+') list.insert(temp_str);
        else list.erase(temp_str);
    }
    cout << list.size() << endl;
    for (auto i : list){
        cout << i << endl;
    }
    return 0;
}
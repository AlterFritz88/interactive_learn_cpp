#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<char> all_chars;
    vector<set<char>> vec_str;
    string temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        set<char> temp_set;
        for (auto i : temp){
            if (isupper(i)){
                all_chars.insert(char(tolower(i)));
                temp_set.insert(char(tolower(i)));
            } else {
                all_chars.insert(i);
                temp_set.insert(i);
            }

        }
        vec_str.push_back(temp_set);
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            vector<int> inter;
            set_intersection(vec_str[i].begin(), vec_str[i].end(), vec_str[j].begin(), vec_str[j].end(), back_inserter(inter));
            for (auto i : inter){
                all_chars.erase(i);
            }
        }
    }

    for (auto i : all_chars){
        cout << i;
    }

    return 0;
}
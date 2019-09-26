#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin >> s1;
    map<char, int> dict;
    for (auto i : s1){
        if (dict.find(i) == dict.end()) dict[i] = 1;
        else dict[i] += 1;
    }
    vector<char> vec;
    char middle;
    bool nechet = false;
    for (auto i : dict){
        if (i.second % 2 == 1 and nechet){
            cout << "-1";
            return 0;
        }
        else if (i.second % 2 == 1 and !nechet){
            nechet = true;
            for (int j = 0; j < (i.second / 2) + 1; j++){
                if (j == 0) middle = i.first;
                else vec.push_back(i.first);
            }

            continue;
        }
        for (int j = 0; j < i.second / 2; j++){
            vec.push_back(i.first);
        }
    }
    sort(vec.begin(), vec.end());
    for (auto i : vec) cout << i;
    cout << middle;
    for (int i = vec.size() - 1; i >= 0; i--){
        cout << vec[i];
    }


    return 0;
}

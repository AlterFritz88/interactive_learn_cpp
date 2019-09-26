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


    for (auto i : dict){
        if (i.second % 2 == 1){
            cout << "-1";
            return 0;
        }
    }
    vector<char> vec;
    for (auto i : dict){
        for (int j = 0; j < i.second / 2; j++){
            vec.push_back(i.first);
        }
    }
    sort(vec.begin(), vec.end());
    for (auto i: vec){
        cout << i;
    }
    for (int i = vec.size() - 1; i >= 0; i--){
        cout << vec[i];
    }
    return 0;
}


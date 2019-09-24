#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> dict = {{'0', 0},
                           {'1', 0},
                           {'2', 0},
                           {'3', 0},
                           {'4', 0},
                           {'5', 0},
                           {'6', 0},
                           {'7', 0},
                           {'8', 0},
                           {'9', 0}};
    for (int i = 0; i < s.size(); i++){
        if (dict.find(s[i]) == dict.end()) dict[s[i]] = 1;
        else dict[s[i]] += 1;
    }
    for (auto i: dict){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
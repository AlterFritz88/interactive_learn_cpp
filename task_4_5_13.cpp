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
    int col = 0;
    for (auto i: dict){
        col = i.second;
        break;
    }
    for (auto i : dict){
        if (i.second != col){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
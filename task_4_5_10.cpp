#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> dict;
    for (auto i : s){
        if (dict.find(i) == dict.end()) dict[i] = 1;
        else dict[i] += 1;
    }

    int max = 0;
    for (auto i : dict){
        if (i.second > max) max = i.second;
    }

    for (auto i : dict){
        if (i.second == max) {
            cout << i.first;
        }
    }
    return 0;
}
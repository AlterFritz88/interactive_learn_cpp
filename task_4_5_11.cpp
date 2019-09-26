#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> dict1, dict2;
    for (auto i : s1){
        if (dict1.find(i) == dict1.end()) dict1[i] = 1;
        else dict1[i] += 1;
    }

    for (auto i : s2){
        if (dict2.find(i) == dict2.end()) dict2[i] = 1;
        else dict2[i] += 1;
    }

    if (dict1 == dict2) cout << "YES";
    else cout << "NO";
    return 0;
}
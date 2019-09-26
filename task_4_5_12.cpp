#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    set<char> dict1, dict2;
    for (auto i : s1){
       dict1.insert(i);
    }

    for (auto i : s2){
        dict2.insert(i);
    }
    if (dict1 == dict2) cout << "YES";
    else cout << "NO";
    return 0;
}
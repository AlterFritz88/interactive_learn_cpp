#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> dict;
    for (int i = 0; i < s.size(); i++){
       if (dict.find(s[i]) == dict.end()) dict[s[i]] = 1;
       else dict[s[i]] += 1;
    }
    cout << dict.size();
    return 0;
}
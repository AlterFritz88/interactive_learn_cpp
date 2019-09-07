#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<char> chet;
    vector<char> ne_chet;
    for (int i = 0; i < s.size(); i++){
        if (i % 2 == 0) chet.push_back(s[i]);
        else ne_chet.push_back(s[i]);
    }

    for (auto i : chet) {
        cout << i;
    }

    for (auto i : ne_chet) {
        cout << i;
    }
    return 0;
}
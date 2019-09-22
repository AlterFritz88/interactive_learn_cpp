#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<char> ss;
    cin >> s;
    for (auto i: s){
        ss.insert(i);
    }
    for (auto i : ss){cout << i;}

    return 0;
}
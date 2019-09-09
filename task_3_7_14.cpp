#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> lower;
    vector<string> upper;
    string s;
    for (int i = 0; i < 10; i++){
        cin >> s;
        if (isupper(s[0])) upper.push_back(s);
        else lower.push_back(s);
    }
    for (auto i : lower){
        cout << i << " ";
    }

    for (auto i : upper){
        cout << i << " ";
    }
    return 0;
}
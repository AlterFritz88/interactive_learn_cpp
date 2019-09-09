#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (auto i : s){
        if (i >= 'a' and i <= 'z') lower++;
        else upper++;
    }

    if (lower == upper) cout << s;
    else if (lower > upper){
        for (auto i : s){
            cout << char(tolower(i));
        }
    } else {
        for (auto i : s) cout << char(toupper(i));
    }
    return 0;
}
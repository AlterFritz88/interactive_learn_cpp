#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (i % 2 == 0) cout << char(toupper(s[i]));
        else cout << char(tolower(s[i]));
    }
    return 0;
}
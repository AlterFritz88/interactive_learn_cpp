#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t = "";
    cin >> s;
    int d = 'A' - 'a';
    for (auto c : s){
        if (c >= 'a' and c <= 'z') t = t + char(c+d);
        if (c >= 'A' and c <= 'Z') t = t + char(c-d);
    }
    cout << t;
    return 0;
}
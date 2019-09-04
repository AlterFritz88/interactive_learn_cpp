#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c_open = 0, c_close = 0;
    for (auto i : s){
        if (i == '(') c_open++;
        else c_close++;
    }
    if (c_close == c_open) cout << "YES";
    else cout << "NO";
    return 0;
}
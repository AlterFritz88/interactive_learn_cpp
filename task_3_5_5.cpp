#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if (s.substr(0, s.size() / 2) == s.substr(s.size() / 2, s.size())){
        cout << "YES";
    } else cout << "NO";
    return 0;
}
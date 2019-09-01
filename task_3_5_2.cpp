#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << s[s.size()/2 - 1] << s[s.size()/2] << s[s.size()/2 + 1];
    return 0;
}
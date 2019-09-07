#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--){
        if (i == s.size() - 1) cout << char(s[i]-32);
        else if (i == 0) cout << char(s[i]+32);
        else cout << s[i];
    }
    return 0;
}
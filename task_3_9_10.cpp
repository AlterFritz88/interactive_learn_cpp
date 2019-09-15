#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i += 5){
        int h = (s[i] - '0') * 16 + (s[i+1] - '0') * 8 + (s[i+2] - '0') * 4 + (s[i+3] - '0') * 2 + (s[i+4] - '0');
        if (h<10) cout << h;
        else cout << char(h - 10 + 'A');
    }
    return 0;
}
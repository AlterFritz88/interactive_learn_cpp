#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (i % 2 == 1) cout << s[i-1];
        else cout << s[i];
    }
    return 0;
}
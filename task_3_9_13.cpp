#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size()-1; i++){
        cout << s[i];
        if (s[i] == s[i+1]) cout << "=";
        else if (s[i] < s[i+1]) cout << "<";
        else cout << ">";
    }
    cout << s[s.size() - 1];
    return 0;
}
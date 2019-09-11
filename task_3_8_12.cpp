#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, tomat = "TOMAT";
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if (s.substr(i, 5) == tomat){
            cout << "POMIDOR";
            i += 4;
        }
        else cout << s[i];
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 2){
        if (s.substr(i, 2) == "00") cout << 0;
        if (s.substr(i, 2) == "01") cout << 1;
        if (s.substr(i, 2) == "10") cout << 2;
        if (s.substr(i, 2) == "11") cout << 3;
    }
    return 0;
}
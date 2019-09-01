#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, sn = "";
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++){
        sn += s[i];
        cout << sn << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int part = s.size() / 4;
    for (int i = 0; i < s.size(); i += part){
        cout << s.substr(i, part) << endl;
    }
    return 0;
}
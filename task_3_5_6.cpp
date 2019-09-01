#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string a1 = s.substr(0, s.size() / 2);
    string a2 = s.substr(s.size() / 2, s.size());

    for (int i = 0; i < a1.size(); i++){
        if (a1[i] != a2[a2.size() - 1 - i]){
            cout << i + 1 << " " << s.size() - i;
        }
    }
    return 0;
}
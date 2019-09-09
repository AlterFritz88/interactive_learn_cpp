#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool up = isupper(s[0]);

    if (up){
        for (auto i : s){
            if (islower(i)){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else {
        for (auto i : s){
            if (isupper(i)){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}
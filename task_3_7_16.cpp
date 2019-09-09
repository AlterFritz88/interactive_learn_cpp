#include <bits/stdc++.h>
using namespace std;

int sameword(string s){
    bool up = isupper(s[0]);

    if (up){
        for (auto i : s){
            if (islower(i)){
                return 0;
            }
        }
        return 1;
    }
    else {
        for (auto i : s){
            if (isupper(i)){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int lower = 0;
    int upper = 0;
    string s;
    for (int i = 0; i < 10; i++){
        cin >> s;
        if (sameword(s)){
            if (islower(s[0])) lower++;
            else upper++;
        }
    }
    if (lower == 10 or upper == 10) cout << "YES";
    else cout << "NO";
    return 0;
}
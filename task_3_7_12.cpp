#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    for (int i = 0; i < 10; i++){
        cin >> s;
        if (i % 2 == 0){
            for (auto j : s){
                cout << char(toupper(j));
            }
        } else {
            for (auto j : s){
                cout << char(tolower(j));
            }
        }
        cout << " ";
    }
    return 0;
}
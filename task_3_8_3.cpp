#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        if (i != '0') cout << i;
    }

    for (auto i : s){
        if (i == '0') cout << i;
    }
    return 0;
}
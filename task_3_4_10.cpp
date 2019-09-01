#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, b = "";
    cin >> s;
    for (auto i : s){
        b = i + b;
    }
    cout << b;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        cout << int(i) - 64;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        cout << char(i - 32);
    }
    return 0;
}
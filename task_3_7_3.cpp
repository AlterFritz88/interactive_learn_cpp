#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    if (c < 91) cout << char(c + 32);
    else cout << char(c - 32);
    return 0;
}
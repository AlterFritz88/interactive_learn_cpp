#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 0, b = 0;
    string s;
    cin >> s;
    for (auto item : s){
        if (item == 'A') a++;
        else b++;
    }


    if (a > b) cout << "A";
    else cout << "B";
    return 0;
}
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

    if (a == b) cout << "A=B";
    else if (a > b) cout << "A>B";
    else cout << "A<B";
    return 0;
}
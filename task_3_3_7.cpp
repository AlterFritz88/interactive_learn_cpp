#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int a1 = 0, a2 = 0;
    for (auto item : a){
        if (item == 'A') a1++;
    }
    for (auto item : b){
        if (item == 'A') a2++;
    }

    if (a1 == a2) cout << a;
    else if (a1 > a2)  cout << a;
    else cout << b;
    return 0;
}
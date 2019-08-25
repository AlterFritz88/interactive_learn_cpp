#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    if (a.size() > b.size()) cout << a << " " << b;
    else cout << b << " " << a;
    return 0;
}
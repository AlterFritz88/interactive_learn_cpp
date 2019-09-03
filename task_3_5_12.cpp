#include <bits/stdc++.h>
using namespace std;
int main(){
    char a, b;
    cin >> a >> b;
    if (a > 64 and a < 91 and b > 64 and b < 91) cout << a;
    else if (a > 96 and a < 123 and b > 96 and b < 123) cout << b;
    else cout << a << b;
    return 0;
}
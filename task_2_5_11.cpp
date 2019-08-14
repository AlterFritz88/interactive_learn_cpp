#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (max(a / 10, a % 10) > max(b / 10, b % 10)) cout << a;
    else if (max(a / 10, a % 10) < max(b / 10, b % 10)) cout << b;
    else cout << a << ' ' << b;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if ((a/10 + a%10) > (b/10 + b%10)) cout << a;
    else if ((a/10 + a%10) < (b/10 + b%10)) cout << b;
    else cout << "=";
    return 0;
}
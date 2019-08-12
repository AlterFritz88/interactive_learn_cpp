#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if ((a*a + b*b == c*c) or (a*a + c*c == b*b) or (c*c + b*b == a*a)) cout << "YES";
    else cout << "NO";
    return 0;
}
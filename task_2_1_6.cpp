#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b;
    c = a * a + 2 * b * b * b - 18;
    cout << c*c*c*c - 8*a*b;

    return 0;
}


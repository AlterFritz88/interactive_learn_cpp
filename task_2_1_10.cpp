#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a + 4*b*c) * (a + 4*b*c)) - 5 * (c*c - a*a*b) - 67;
    return 0;
}

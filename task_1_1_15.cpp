#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << 2 * pow((a*a + b*b), 2) + 3 * pow((pow(c, 3) + pow(d, 3)), 3);
    return 0;
}
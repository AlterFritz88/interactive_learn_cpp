#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, n=0;
    cin >> a; if (a % 3 == 0 || a % 7 == 0) n += a;
    cin >> a; if (a % 3 == 0 || a % 7 == 0) n += a;
    cin >> a; if (a % 3 == 0 || a % 7 == 0) n += a;
    cin >> a; if (a % 3 == 0 || a % 7 == 0) n += a;
    cin >> a; if (a % 3 == 0 || a % 7 == 0) n += a;
    cout << n;
    return 0;
}


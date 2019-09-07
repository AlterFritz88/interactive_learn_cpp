#include <bits/stdc++.h>
using namespace std;
int main(){
    char a, b, c;
    cin >> a >> b >> c;
    if (a > b and b < c) cout << "pit";
    else if (a < b and b > c) cout << "mountain";
    else cout << "plateau";
    return 0;
}
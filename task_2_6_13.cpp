#include <bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin >> c;
    cout << "FLOOR " << c / 100 << " ";
    if (c % 100 < 6) cout << "LEFT";
    else if (c % 100 > 12) cout << "MIDDLE";
    else cout << "RIGHT";
    return 0;
}
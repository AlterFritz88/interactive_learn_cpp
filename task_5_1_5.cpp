#include <bits/stdc++.h>
using namespace std;
int main(){
    int b, v;
    cin >> b >> v;
    cout << (b * 1024 * 8 / v) / 60;
    return 0;
}
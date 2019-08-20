#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "(";
    for (int i = 1; i < n; i++) cout << i << ",";
    cout << n << ")" << endl;
    cout << "(";
    for (int i = n; i > 1; i--) cout << i << ",";
    cout << 1 << ")";
    return 0;
}

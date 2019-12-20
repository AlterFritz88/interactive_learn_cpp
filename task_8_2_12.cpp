#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1, a2, a3, a4, a5; cin >> a1 >> a2 >> a3 >> a4 >> a5;
    int sum = a1 + a2 + a3 + a4 + a5;
    if (sum == 0) {
        cout << -1;
        return 0;
    }
    if (sum % 5 != 0) {
        cout << -1;
        return 0;
    }
    else {
        cout << sum / 5;
    }
    return 0;
}
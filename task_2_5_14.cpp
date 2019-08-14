#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    cout << a;
    for (int i = 0; i < 9; i++){
        cin >> b;
        if (a > b) cout << '>';
        else cout << '<';
        cout << b;
        a = b;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, sum;
    for (int i = 0; i < 10; i++){
        cin >> a >> b >> sum;
        if (a+b == sum) cout << a << "+" << b << "==" << sum << endl;
        else cout << a << "+" << b << "!=" << sum << endl;
    }
    return 0;
}
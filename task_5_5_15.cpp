#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    long long ans = a;
    for (int i = 1; i <= b - 1; i++){
        ans *= a;
    }
    cout << ans % 10;
    return 0;
}
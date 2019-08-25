#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a1 = n / 100;
    int a2 = n /10 % 10;
    int a3 = n % 10;
    int ans = 0;
    if (a1 % 2 == 0) ans += (a1 + 1) * 100;
    else ans += (a1 - 1) * 100;
    if (a2 % 2 == 0) ans += (a2 + 1) * 10;
    else ans += (a2 - 1) * 10;
    if (a3 % 2 == 0) ans += (a3 + 1);
    else ans += (a3 - 1);
    cout << ans;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b; cin >> n >> m >> a >> b;
    if (n%m == 0) cout << min(n*a, n/m * b);
    else cout << min(min(n*a, (n/m+1)*b), (n/m)*b + (n%m)*a);
    return 0;
}
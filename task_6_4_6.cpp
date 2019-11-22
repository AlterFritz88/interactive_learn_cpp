#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll f(ll x){
    ll a = 1, b = 1, c = 1, d;
    if (x == 1) {
        cout << 1 << " ";
    } else if (x == 2) cout << "1 1" << " ";
    else if (x == 3) cout << "1 1 1" << " ";

    else {
        cout << "1 1 1" << " ";
        for (ll i = 4; i <= x; i++){

            d = a + b + c; a = b; b = c, c = d;
            cout << c << " ";
        }
    }
    return 1;
}

int main(){
    ll n;
    cin >> n;
    f(n);
    return 0;
}
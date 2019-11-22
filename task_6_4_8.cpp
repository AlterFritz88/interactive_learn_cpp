#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f1(ll x){
    if (x <= 2) return 1;
    else return f1(x-2) + f1(x-1);
}

ll f(ll x, ll n){
    ll a = 1, b = 1, c;
    if (x == 1) {
        cout << "YES" << endl << 1;return 1;
    }
    else if (x == 2) {
        cout << "YES" << endl << 2;return 1;
    }
    else for (ll i = 3; i <= x; i++){
            c = a + b; a = b; b = c;
            if (c == n) {
                cout << "YES" << endl << i;
                return 1;
            }
            if (c > n) {
                cout << "NO";
                return 1;
            }
        }
    return c;
}

int main(){
    ll n;
    cin >> n;
    f(100000000000, n);
    return 0;
}


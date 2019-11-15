#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll f(ll x){
    ll a = 1, b = 1, c = 1, d;
    if (x <= 3) return 1;
    else for (ll i = 4; i <= x; i++){
            d = a + b + c; a = b; b = c, c = d;
        }
    return c;
}

int main(){
    ll n;
    cin >> n;
    cout << f(n);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f1(ll x){
    if (x <= 2) return 1;
    else return f1(x-2) + f1(x-1);
}

ll f(ll x){
    ll a = 1, b = 1, c;
    if (x <= 2) return 1;
    else for (ll i = 3; i <= x; i++){
        c = a + b; a = b; b = c;
    }
    return c;
}

int main(){
    ll n;
    cin >> n;
    cout << f(n);
    return 0;
}


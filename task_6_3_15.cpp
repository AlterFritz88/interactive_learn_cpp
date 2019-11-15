#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(ll x){
    ll k = 1;
    for (ll i = 2; i <= x; i++){
        k = k + i;
    }
    return k;
}

int main(){
    ll a;
    cin >> a;
    cout << f(a);
    return 0;
}
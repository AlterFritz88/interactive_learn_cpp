#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(ll x){
    if (x == 1) return 1;
    else return f(x-1) * x;
}

int main(){
    ll a;
    cin >> a;
    cout << f(a);
    return 0;
}


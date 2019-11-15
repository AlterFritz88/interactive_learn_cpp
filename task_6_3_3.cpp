
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gdc(ll x, ll y){
    if (y == 0) return x;
    else return gdc(y, x%y);
}

int main(){
    ll a, b;
    cin >> a >> b;
    cout << a * b / gdc(a, b);
    return 0;
}
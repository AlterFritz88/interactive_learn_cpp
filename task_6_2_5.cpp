#include <bits/stdc++.h>
using namespace std;

long long f (long long x) {
    long long i, n=0;
    for (i = 1; i*i<x; i++){
        if (x % i == 0) n+= 2;
    }
    if (i*i == x) n++;
    return n;
}

int main(){
    long long a;
    cin >> a;
    cout << f(a);
    return 0;
}
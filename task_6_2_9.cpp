#include <bits/stdc++.h>
using namespace std;

bool f(long long x){
    if (x == 1) return false;
    for (long long i = 2; i*i <= x; i++){
        if (x % i == 0) return false;
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    for (long long i = 2; i <= n; i++){
        if (f(i)) cout << i << " ";
    }
    return 0;
}


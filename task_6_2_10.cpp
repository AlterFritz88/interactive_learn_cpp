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
    long long a, b;
    int c = 0;
    cin >> a >> b;
    for (long long i = a; i <= b; i++){
        if (f(i)) c++;
    }
    cout << c;
    return 0;
}


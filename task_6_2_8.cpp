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
    long long a;
    cin >> a;
    cout << f(a);
    return 0;
}

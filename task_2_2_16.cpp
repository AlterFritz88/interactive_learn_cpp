#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    cout << n / 1000 << n % 10 << n / 10 % 10 << n / 100 % 10;
    return 0;
}


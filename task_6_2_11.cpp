#include <bits/stdc++.h>
using namespace std;

int main() {
    long long i, x, a=2;
    cin >> x;
    int c = 0;
    while (x > 1){
        while (x % a == 0){
            x /= a;
            c++;
        }
        a++;
    }
    cout << c;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s = 1, k = n;
    if (n == 1) s--;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) s += i + n / i;
    if (s == k) cout << "YES";
    else cout << "NO";
}
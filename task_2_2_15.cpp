#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << (n / 100 % 10) * 100 <<  "+" << (n / 10 % 10) * 10 <<  "+" << n % 10;
    return 0;
}

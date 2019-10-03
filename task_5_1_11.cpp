#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num1 = n / 10 % 10 + n / 100;
    int num2 = n % 10 + n / 10 % 10;
    if (num1 < num2) cout << num2 << num1;
    else cout << num1 << num2;
    return 0;
}
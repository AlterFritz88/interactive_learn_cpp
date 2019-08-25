#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        sum += i / 10 % 10;
    }
    cout << sum;
    return 0;
}
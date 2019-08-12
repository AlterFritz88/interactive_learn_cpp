#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    switch (n / 10000000){
        case 8912: cout << "mts"; break;
        case 8962: cout << "beeline"; break;
        case 8922: cout << "megafon"; break;
        case 8908: cout << "tele2"; break;
        default:
            break;
    }
    return 0;
}
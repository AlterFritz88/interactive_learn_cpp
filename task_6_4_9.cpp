#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    for (long long i = 1; i < 10000000; i++){
        if (i * i == n){
            cout << "YES\n" << i;
            return 0;
        }
        if (i * i > n){
            cout << "NO";
            return 0;
        }
    }
    return 0;
}
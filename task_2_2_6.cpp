#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, prod = 1;
    cin >> n;
    for (int i = 0; i < 6; i++){
        prod *= n % 10;
        n = n / 10;
    }
    cout << prod;

    return 0;
}


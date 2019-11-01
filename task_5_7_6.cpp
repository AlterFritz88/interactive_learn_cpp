#include <bits/stdc++.h>
using namespace std;
int main(){
    int c_odd = 0, c_true = 0, temp, sum = 0;
    for (int i = 0; i < 20; i++){
        cin >> temp;
        if (temp % 2 == 0) {
            c_true++;

        }
        else {
            c_odd++;
        }
        sum += temp;
    }
    if (sum % 2 == 1) cout << c_odd;
    else cout << c_true;
    return 0;
}
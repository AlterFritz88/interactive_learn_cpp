#include <bits/stdc++.h>
using namespace std;
int main(){
    int max_odd = INT_MIN, max_true = INT_MIN, temp;
    for (int i = 0; i < 20; i++){
        cin >> temp;
        if (temp % 2 == 1 and temp > max_odd) max_odd = temp;
        if (temp % 2 == 0 and temp > max_true) max_true = temp;
    }

    cout << max_true - max_odd;
    return 0;
}
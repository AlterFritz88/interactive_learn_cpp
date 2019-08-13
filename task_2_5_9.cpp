#include <bits/stdc++.h>
using namespace std;
int main(){
    int min = INT_MAX, max = INT_MIN, temp;
    for (int i = 0; i < 5; i++) {
        cin >> temp;
        if (temp < min) min = temp;
        if (temp > max) max = temp;
    }
    cout << max - min;
    return 0;
}
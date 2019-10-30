#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, min = 210;
    for (int i = 0; i < 30; i++){
        cin >> temp;
        if (temp > 179 and temp < min) min = temp;
    }
    cout << min;
    return 0;
}
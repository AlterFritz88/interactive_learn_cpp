#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, min = 100;
    for (int i = 0; i < 30; i++){
        cin >> temp;
        if (temp > 19 and temp < min) min = temp;
    }
    cout << min;
    return 0;
}
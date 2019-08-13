#include <bits/stdc++.h>
using namespace std;
int main(){
    int max = INT_MIN, temp;
    for (int i = 0; i < 4; i++){
        cin >> temp;
        if (temp > max) max = temp;
    }
    cout << max;
    return 0;
}
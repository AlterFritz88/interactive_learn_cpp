#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, plus = 0, minus = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp > 0) plus++;
        if (temp < 0) minus++;
    }
    cout << plus - minus;
    return 0;
}
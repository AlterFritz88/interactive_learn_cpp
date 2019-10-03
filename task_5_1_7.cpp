#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp % 10 == 2 and temp > max) max = temp;
    }
    cout << max;
    return 0;
}
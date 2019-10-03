#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp1, temp2, wins = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp1 >> temp2;
        if (temp1 * 60 + temp2 <= 1110) wins++;
    }
    cout << wins;
    return 0;
}
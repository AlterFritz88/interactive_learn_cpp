#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, row, temp;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) a[i][j] = 0;
    }

    for (int i = 1; i <= n; i++){
        cin >> row;

        for (int j = 0; j < row; j++){
            cin >> temp;
            a[i-1][temp - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x, y;
    cin >> n >> m;
    int a[n+1][n+1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) a[i][j] = 0;
    }
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        a[x][y] = 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
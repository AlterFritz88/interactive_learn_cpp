#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, temp; cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> temp;
            a[i][j] = temp;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j % 2 == 0){
                cout << a[n-i-1][j] << " ";
            } else cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
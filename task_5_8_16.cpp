#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int Ax = 0, Ay = 0, Bx = 0, By = 0;
    char a[n][m];
    char temp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> temp;
            a[i][j] = temp;
            if (temp == 'A'){
                Ay = i;
                Ax = j;
            }
            if (temp == 'B'){
                By = i;
                Bx = j;
            }
        }
    }

    for (int i = Ax + 1; i <= Bx; i++){
        a[Ay][i] = '*';
    }

    for (int i = Ax; i < Bx; i++){
        a[By][i] = '*';
    }

    for (int i = Ay+1; i <= By; i++){
        a[i][Ax] = '*';
    }
    for (int i = Ay; i < By; i++){
        a[i][Bx] = '*';
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
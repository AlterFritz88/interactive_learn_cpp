#include <bits/stdc++.h>
using namespace std;
int main(){
    char temp;
    char a[8][8];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> temp;
            a[i][j] = temp;
        }
    }

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (a[i][j] == 'K'){
                if (i == 0 and j == 0){
                    a[1][1] = '*';
                    a[1][0] = '*';
                    a[0][1] = '*';
                    break;
                }
                else if (i == 0 and j == 7){
                    a[0][6] = '*';
                    a[1][6] = '*';
                    a[1][7] = '*';
                    break;
                }
                else if (i == 7 and j == 7){
                    a[7][6] = '*';
                    a[6][6] = '*';
                    a[6][7] = '*';
                    break;
                }
                else if (i == 7 and j == 0){
                    a[7][1] = '*';
                    a[6][0] = '*';
                    a[6][1] = '*';
                    break;
                }
                else if (j == 0){
                    a[i][j+1] = '*';
                    a[i+1][j] = '*';
                    a[i-1][j] = '*';
                    a[i+1][j+1] = '*';
                    a[i-1][j+1] = '*';
                    break;
                }
                else if (j == 7){
                    a[i][j-1] = '*';
                    a[i+1][j] = '*';
                    a[i-1][j] = '*';
                    a[i+1][j-1] = '*';
                    a[i-1][j-1] = '*';
                    break;
                }
                else if (i == 0){
                    a[i][j-1] = '*';
                    a[i][j+1] = '*';
                    a[i+1][j] = '*';
                    a[i+1][j+1] = '*';
                    a[i+1][j-1] = '*';
                    break;
                }
                else if (i == 7){
                    a[i][j+1] = '*';
                    a[i][j-1] = '*';
                    a[i-1][j] = '*';
                    a[i-1][j+1] = '*';
                    a[i-1][j-1] = '*';
                    break;
                }
                else {
                    a[i+1][j] = '*';
                    a[i-1][j] = '*';
                    a[i][j+1] = '*';
                    a[i][j-1] = '*';
                    a[i+1][j+1] = '*';
                    a[i-1][j+1] = '*';
                    a[i+1][j-1] = '*';
                    a[i-1][j-1] = '*';
                }
            }
        }
    }
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
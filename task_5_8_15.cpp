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
                }
                else if ( )
            }
        }
    }
    return 0;
}
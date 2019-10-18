#include <bits/stdc++.h>
using namespace std;
int main(){
    int y, x, count = 0;
    char temp;
    cin >> y >> x;
    char tape[y][x];
    for (int i = 0; i < y ; i++){
        for (int j = 0; j < x ; j++){
            cin >> temp;
            tape[i][j] = temp;
        }
    }

    for (int i = 0; i < y - 1; i++){
        for (int j = 0; j < x - 1; j++){

            if (tape[i][j] == '#'){
                count++;
                break;
            }
        }

    }
    cout << count;
    return 0;
}
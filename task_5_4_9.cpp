#include <bits/stdc++.h>
using namespace std;
int main(){
    int s1_x1, s1_y1, s1_x2, s1_y2;
    int s2_x1, s2_y1, s2_x2, s2_y2;
    cin >> s1_x1 >> s1_y1 >> s1_x2 >> s1_y2;
    cin >> s2_x1 >> s2_y1 >> s2_x2 >> s2_y2;


    int a[100][100];

    for(int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            a[i][j] = 0;
        }
    }

    for(int i = s1_x1; i < s1_x2; i++){
        for(int j = s1_y1; j < s1_y2; j++){
            a[i][j]++;
        }
    }

    for(int i = s2_x1; i < s2_x2; i++){
        for(int j = s2_y1; j < s2_y2; j++){
            a[i][j]++;
        }
    }

    int sum = 0;

    for(int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            if (a[i][j] == 2) {
                sum++;
            }
        }
    }


    cout << sum;


    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1_1, y1_1, x2_1, y2_1;
    cin >> x1_1 >> y1_1 >> x2_1 >> y2_1;
    int x1_2, y1_2, x2_2, y2_2;
    cin >> x1_2 >> y1_2 >> x2_2 >> y2_2;

    if (x1_1 < x1_2 and y1_1 < y1_2){
        cout << (x2_1 - x1_2) * (y2_1 - y1_2);
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int w, h;
    cin >> w >> h;
    for (int i = 1; i <= h; i++){
        for (int j = 0; j < w; j++){
            cout << i%10;
        }
        cout << endl;
    }

    return 0;
}
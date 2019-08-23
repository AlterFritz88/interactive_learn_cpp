#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, twos = 0, marker = 0;
    for (int i = 0; i < 25; i++){
        cin >> temp;
        if (marker == 0)
            if (temp == 2) {
                marker = 1;
                twos++;
                continue;
            }
        if (marker == 1) {
            if (temp == 2){
                twos++;
            }
            else {
                twos--;
                marker = 0;
            }
        }
    }
    cout << twos;
    return 0;
}


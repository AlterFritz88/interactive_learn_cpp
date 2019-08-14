#include <bits/stdc++.h>
using namespace std;
int main(){
    int min = 0, temp;
    for (int i = 0; i < 7; i++){
        cin >> temp;
        if (temp > min) min = temp;
    }
    cout << min / 100;
    return 0;
}
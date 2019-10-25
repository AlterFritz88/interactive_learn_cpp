#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<int, int> bank = {{5, 0}, {3, 0}};
    cin >> n;
    vector<int> coins = {5, 3};

    while (n > 0){
        if (n == 3 or n == 6 or n == 9 or n == 12){
            break;
        }
        n -= 5;
        bank[5] += 1;
    }
    if (n == 5){
        bank[5] += 1;
        n -= 5;
    }
    while (n > 0){
        n -= 3;
        bank[3] += 1;
    }

    cout << bank[5] << " " << bank[3];
    return 0;
}
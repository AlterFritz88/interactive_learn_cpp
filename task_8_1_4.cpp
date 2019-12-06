#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum, bank = 0; cin >> sum;
    for (auto i : {100, 20, 10, 5, 1}){
        while (sum - i >= 0){
            sum -= i;
            bank++;

        }
    }
    cout << bank;
    return 0;
}
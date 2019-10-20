#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum, bank = 0;
    cin >> sum;
    vector<int> vec = {100, 20, 10, 5, 1};

    for (auto item : vec){
        while (sum - item >= 0){
            bank++;
            sum -= item;
        }
    }
    cout << bank;

    return 0;
}
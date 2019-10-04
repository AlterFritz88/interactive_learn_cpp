#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    int sum_odd = 0, sum_set = 0;
    for (auto i : n){
        int ia = i - '0';
        if (ia % 2 == 0) sum_set += ia;
        else sum_odd += ia;
    }

    if (sum_odd > sum_set) cout << sum_odd << sum_set;
    else cout << sum_set << sum_odd;

    return 0;
}
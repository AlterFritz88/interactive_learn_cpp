#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0,prod = 1, temp;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        sum += temp;
        prod *= temp;}
    cout << abs(prod - sum);
    return 0;
}
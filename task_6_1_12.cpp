#include <bits/stdc++.h>
using namespace std;

int sum (int num){
    int prod = 1;
    while (num >= 1){
        prod *= num % 10;
        num /= 10;
    }
    return prod;
}

int main(){
    int temp;
    for (int i = 0; i < 4; i++){
        cin >> temp;
        cout << sum(temp) << " ";
    }
    return 0;
}
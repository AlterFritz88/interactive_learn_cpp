#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum_1 = 0, sum_2 = 0;
    int n2 = n / 1000;

    for (int i = 0; i < 3; i++){
        sum_1 += n % 10;
        n = n / 10;
    }

    for (int i = 0; i < 3; i++){
        sum_2 += n2 % 10;
        n2 = n2 / 10;
    }

    if (sum_1 == sum_2){
        cout << "Happy ticket)))";
    } else cout << "Nooo(((";


    return 0;
}
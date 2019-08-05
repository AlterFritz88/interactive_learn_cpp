#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0, temp;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        if (temp % 2 == 1){
            sum += temp;
        }
    }
    cout << sum;
    return 0;
}


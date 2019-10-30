#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, c = 0, sum = 0;
    for (int i = 0; i < 30; i++){
        cin >> temp;
        if (temp == 4 or temp == 5){
            c++;
            sum += temp;
        }
    }

    cout << fixed<<setprecision(2) << double(sum) / c;
    return 0;
}
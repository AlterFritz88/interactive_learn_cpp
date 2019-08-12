#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, count = 0, sum = 0;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        if (temp / 10 == temp % 10){
            count++;
            sum += temp;
        }
    }
    cout << count << " " << sum;

    return 0;
}


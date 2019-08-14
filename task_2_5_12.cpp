#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, max = INT_MIN, count = 0;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        if (temp > max){
            max = temp;
            count = 0;
        }
        if (temp == max) count++;
    }
    cout << max << " " << count;
    return 0;
}

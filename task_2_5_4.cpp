#include <bits/stdc++.h>
using namespace std;
int main(){
    int max = INT_MAX, temp, index = 0;
    for (int i = 1; i <= 8; i++){
        cin >> temp;
        if (temp <= max){
            max = temp;
            index = i;
        }
    }
    cout << max << " " << index;
    return 0;
}
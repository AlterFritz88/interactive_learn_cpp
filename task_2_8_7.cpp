#include <bits/stdc++.h>
using namespace std;
int main(){
    int count = 0, temp;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        if ((temp % 10 == 0) and ((temp / 10 % 10) == 0) and (temp / 100 % 10 != 0)) count++;
    }
    cout << count;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, count = 0;
    for (int i = 0; i < 10; i++){
        cin >> temp;
        if (temp % (temp % 10) == 0) count++;
    }
    cout << count;
    return 0;
}
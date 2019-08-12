#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0;
    for (int i = 0; i < 10; i++){
        cin >> n;
        if (((n / 10) + (n % 10)) == 10) count++;
    }
    cout << count;
    return 0;
}


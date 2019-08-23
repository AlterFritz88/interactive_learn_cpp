#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, chet = 0, ne_chet = 0;
    for (int i = 1; i < 31; i++){
        cin >> temp;
        if (temp % 2 == 0 and i % 2 == 0) chet++;
        if (temp % 2 == 1 and i % 2 == 1) ne_chet++;
    }
    cout << chet << " " << ne_chet;

    return 0;
}

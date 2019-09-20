#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, chet = 0, ne_chet = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> temp;
        if (i % 2 == 0 and temp % 2 == 0) chet++;
        if (i % 2 != 0 and temp % 2 == 1) ne_chet++;
    }
    cout << chet << " " << ne_chet;
    return 0;
}
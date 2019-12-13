#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums; cin >> nums;
    string current, password;
    cin >> current >> password;
    int c = 0;
    for (int i = 0; i < nums; i++){
        int cur = current[i] - '0';
        int pas = password[i] - '0';
        int dif = abs(cur - pas);

        c += min(dif, 10  - dif);
    }
    cout << c;
    return 0;
}
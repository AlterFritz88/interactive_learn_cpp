#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, null = 0, one = 0;
    for (int i = 0; i < 365; i++){
        cin >> temp;
        if (temp == 1) one++;
        else null++;
    }
    if (one > null) cout << "YES";
    else cout << "NO";
    return 0;
}


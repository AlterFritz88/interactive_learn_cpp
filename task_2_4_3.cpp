#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < 6; i++){

        if (n % 10 == 1 or n % 10 == 0) n = n / 10;
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

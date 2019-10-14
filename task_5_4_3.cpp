#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= (n / 2) ; i++){
        if (i + 1 > n - i){
            continue;
        }
        if (i + 1 == n - i){
            cout << i + 1 << endl;
        }
        else {
            cout << i + 1 << " " << n - i << endl;
        }

    }
    return 0;
}
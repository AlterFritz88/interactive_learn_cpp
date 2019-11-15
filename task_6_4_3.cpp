#include <bits/stdc++.h>
using namespace std;
typedef long long l;


l f(l x){
    l k;
    if (x == 1){
        cout << "1";
        k = 1;
    } else if (x == 2){
        cout << "1 2";
        k = 2;
    } else {
        cout << "1 2 ";
        k = 2;

        for (l i = 3; i <= x; i++) {

            k = k + i - 1;
            cout << k << " ";
        }
    }
    return k;
}

int main(){
    l n;
    cin >> n;
    f(n);
    return 0;
}
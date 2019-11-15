#include <bits/stdc++.h>
using namespace std;
typedef long long l;


l f(l x){
    l k = 0;
    if (x == 1){
        cout << 2;
    } else if (x == 2){
        cout << "2 4 ";
    } else {



    k = 2;
    cout << k << " ";
    cout << "4 ";
    for (l i = 2; i <= x; i++) {

        k = ((k + 1) * 2);
        cout << k + 2 << " ";
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
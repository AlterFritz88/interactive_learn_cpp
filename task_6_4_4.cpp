#include <bits/stdc++.h>
using namespace std;
typedef long long l;

l f(l x){
    l a = 1, b = 1, c;
    if (x == 1) {
        cout << "1 ";
        return 1;
    }
    else if (x == 2) {
        cout << "1 1 ";
        return 1;
    }
    else {
        cout << "1 1 ";
        for (l i = 3; i <= x; i++){
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    return c;
}


int main(){
    l n;
    cin >> n;
    f(n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long l;


l f(l x){
    l k = 1;
    cout << k << " ";
    for (l i = 2; i <= x; i++){
        k = k + i;
        cout << k << " ";
    }
    return k;
}

int main(){
    l n;
    cin >> n;
    f(n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int a, b, ans;

int f(int x){
    if (x > b) return 0;
    if (x == b) return 1;
    return f(x+1) + f(x*2);
}

int main(){

    cin >> a >> b;
    ans = f(a);
    cout << ans;
    return 0;
}
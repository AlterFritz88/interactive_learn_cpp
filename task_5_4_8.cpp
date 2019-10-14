#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, chet = 0, ne_chet = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (i % 2 == 0) chet += i;
        else ne_chet += i;
    }
    if (ne_chet == chet) cout << 0;
    else if (chet > ne_chet) cout << 1;
    else cout << 2;
    return 0;
}
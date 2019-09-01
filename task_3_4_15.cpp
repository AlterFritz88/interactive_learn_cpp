#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1, a2;
    char znak;
    cin >> a1 >> znak >> a2;
    if (znak == '-') cout  << a1 - a2;
    else cout << a2 + a1;
    return 0;
}
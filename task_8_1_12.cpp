#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int min_c = min(a, b);
    if (min_c % 2 == 0) cout << "Malvika";
    else cout << "Akshat";
    return 0;
}
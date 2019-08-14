#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if ((n%10 + n/10%10 + n/100) < ((n%10) * (n/10%10) * (n/100))) cout << "P";
    else cout << "S";
    return 0;
}
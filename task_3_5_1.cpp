#include <bits/stdc++.h>
using namespace std;
int main(){
    char temp;
    char a[2];
    cin >> a[0] >> a[1];
    sort(a, a+2);
    cout << char(a[0] + 1);
    return 0;
}
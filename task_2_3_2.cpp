#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if ((n / 10000 % 10) == (n % 10)){
        cout << "YES";
    } else cout << "NO";
    return 0;
}


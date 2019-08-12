#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, temp;
    cin >> a >> b;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        if (a % temp == 0 and b % temp == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
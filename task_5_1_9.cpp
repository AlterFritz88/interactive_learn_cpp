#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, min = 999;
    bool no = false;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp < -15) no = true;
        if (temp < min) min = temp;
    }
    cout << min << endl;
    if (no) cout << "YES";
    else cout << "NO";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, max = 0;
    bool no = false;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp == 0) no = true;
        if (temp > max) max = temp;
    }
    cout << max << endl;
    if (no) cout << "YES";
    else cout << "NO";
    return 0;
}
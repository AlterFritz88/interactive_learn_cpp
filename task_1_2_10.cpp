#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans;
    cin >> n;
    for (int i = 1; i < 11; i++){
        ans = i * n;
        cout << n << "*" << i << "=" << ans << endl;
    }

    return 0;
}

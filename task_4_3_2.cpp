#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        int ans = temp % 10 * 10 + temp / 10;
        cout << ans << " ";
    }
    return 0;
}
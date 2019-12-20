#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long a, b, k;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> k;
        if (k % 2 == 0){
            cout << (a-b) * (k/2) << endl;
        }
        else cout << (a-b) * (k/2) + a << endl;
    }
    return 0;
}
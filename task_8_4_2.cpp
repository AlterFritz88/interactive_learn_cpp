#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++){
        cin >> temp;
        sum1 += temp;
    }
    for (int i = 0; i < n; i++){
        cin >> temp;
        sum2 += temp;
    }
    if (sum1 >= sum2) cout << "YES";
    else cout << "NO";
    return 0;
}
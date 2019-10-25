#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, temp, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        sum = 0;
        for (int j = 0; j < m; j++){
            cin >> temp;
            sum += temp;
        }
        cout << sum << " ";
    }

    return 0;
}
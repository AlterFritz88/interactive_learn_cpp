#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k = 0; cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == '#')k++;
        }
    }
    cout << k;
    return 0;
}

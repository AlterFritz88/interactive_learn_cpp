#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    vector<int> b;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int k = 0;
        for (int j = 0; j < m; j++) if (a[i][j] % 2 == 0) k++;
        b.push_back(k);
    }
    for (auto t : b) cout << t << " ";
    return 0;
}
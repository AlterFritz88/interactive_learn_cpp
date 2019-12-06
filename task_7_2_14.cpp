#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<int>> a(n);
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        a[x-1].push_back(y-1);
        a[y-1].push_back(x-1);
    }
    for (int i = 0; i < n; i++){
        cout << a[i].size() << " ";
        sort(a[i].begin(), a[i].end());
        for (auto t : a[i]) {
            cout << t+1 << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct st{int l; int r;};

int main(){
    int m; cin >> m;
    vector<st> b(m);
    for (int j = 0; j < m; j++) cin >> b[j].l >> b[j].r;
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i<n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) sort(a.begin() + b[j].l, a.end() - (n-b[j].r-1));
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
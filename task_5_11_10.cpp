#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int l, r; cin >> l >> r;
    sort(a.begin() + l, a.end() - (n - r -1));
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}

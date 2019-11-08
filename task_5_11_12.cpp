#include <bits/stdc++.h>
using namespace std;
struct  st {int k; int x;};
bool cmp(st a1, st a2){
    if (a1.k > a2.k) return false;
    return true;
}

int main(){
    int n; cin >> n;
    vector<st> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].x;
    for (int i = 0; i < n; i++) cin >> a[i].k;
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) cout << a[i].x << " ";
    return 0;
}

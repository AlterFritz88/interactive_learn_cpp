#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    int s = 0;
    x = abs(x);
    while (x > 0){
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cout << sum(a[i]) << " ";
    return 0;
}
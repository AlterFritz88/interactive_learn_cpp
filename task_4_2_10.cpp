#include <bits/stdc++.h>
using namespace std;
int main() {
    int k = 0;
    vector<int> a;
    a.resize(100, 13);
    for(int i = 15; i < 88; i++) k+= a[i];
    cout << k;
    return 0;
}


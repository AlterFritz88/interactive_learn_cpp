#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.insert(temp);
    }

    for (auto t: a) cout << t << " ";
    return 0;
}



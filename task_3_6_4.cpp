#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i = i + 3) {
        char a[3];
        for (int j = 0; j < 3; j++) {
            a[j] = s[i + j];
        }
        sort(a, a + 3);
        for (auto j : a) cout << j;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s, c = 0; cin >> n >> s;
    for (int i = n; i > 0; i--) {

        while (s - i >= 0) {
            s -= i;
            c++;
        }
    }
    cout << c;
    return 0;
}
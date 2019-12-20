#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    string final = "";
    for (int i = 0; i <= n; i++){
        final += s[i];
        i += (final.size());
    }
    cout << final;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        if (i > 47 and i < 58) cout << i;
    }

    return 0;
}

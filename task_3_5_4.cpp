#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int triger = 0;
    for (auto i : s){
        if (i == 'A'){
            triger = 1;
            cout << i;
            continue;
        }

        if (i == 'B'){
            cout << i;
            return 0;
        }

        if (triger == 1) cout << i;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin >> st;
    int c = 0;
    int q = 0;
    for (auto t : st) if (t == 'Q') q++;
    int p = 0;
    for (auto t : st){
        if (t == 'Q') p++;
        if (t == 'A') c+= (q-p)*p;
    }
    cout << c;
    return 0;
}
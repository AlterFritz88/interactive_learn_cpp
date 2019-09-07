#include <bits/stdc++.h>
using namespace std;
int main(){
    int raz;
    cin >> raz;
    string s;
    cin >> s;
    char pattern = '#';
    int count = 0;
    for (auto i : s){
        if (i == pattern) count++;
    }

    if (count == raz) cout << "YES";
    else cout << "NO";
    return 0;
}
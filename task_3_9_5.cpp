#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        cout << i - 'a' + 1 << " ";
    }
    return 0;
}


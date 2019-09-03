#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        if (i == '|') cout << endl;
        else cout << i;
    }
    return 0;
}
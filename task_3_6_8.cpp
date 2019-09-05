#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<char> small;
    vector<char> big;
    for (auto i : s){
        if (i < 91 and i > 64){
        big.push_back(i);
        } else small.push_back(i);
    }
    for (auto i : small) cout << i;
    for (auto i : big) cout << i;
    return 0;
}